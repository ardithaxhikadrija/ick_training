#include <iostream>
#include <algorithm>
#include <cctype>
#include <cmath>
#include <memory>
#include <regex>
#include <stack>
#include <string>
#include <vector>

/**
 * @brief Creation of the Calculator class
 *
 */
class Calculator {
 private:
  Calculator() = default;
  Calculator(std::string const &str) : _expr(str) {
    _expr.erase(
        std::remove_if(std::begin(_expr), std::end(_expr),
                       [&](auto ch) -> bool { return std::isspace(ch); }),
        std::end(_expr));
    try {
      std::stack<std::string::value_type> p_stack;
      for (const auto &ch : _expr) {
        switch (ch) {
          case '(':
            p_stack.push('(');
            break;
          case ')':
            if (p_stack.empty() || p_stack.top() != '(')
              throw std::runtime_error(
                  "error: unbalanced or unexpected parentheses\n");
            // I would prefere to go with spdlog library but I didn't know if it
            // was okay with you.
            else
              p_stack.pop();
            break;
          default:
            break;
        }
      }
      if (!p_stack.empty())
        throw std::runtime_error(
            "error: unbalanced or unexpected parentheses\n");
      fretval = evaluate();
      std::cout << fretval << "\n";
    } catch (std::exception const &e) {
      std::cerr << e.what() << "\n";
    }
  }

  /**
   * @brief Creation of enum class
   * Based on the symbol that the user inputs it will call the relevant object .
   *
   */
  enum class enum_op_t : char {
    OP_ADD = '+',
    OP_SUB = '-',
    OP_MUL = '*',
    OP_DIV = '/',
    NULLTYPE = '0'
  };

  /**
   * @brief Creation of operator class
   *
   */
  class operator_t {
   public:
    enum_op_t _type;
    unsigned short _priority = 0;
    char _assoc;
    operator_t(enum_op_t const &s, unsigned short i = 0, char a = 'L')
        : _type(s), _priority(i), _assoc(a) {}

   private:
    operator_t() = delete;
  };

  Calculator(Calculator const &) = delete;
  Calculator(Calculator &&) = delete;
  auto operator=(Calculator const &) = delete;

  std::string _expr;
  std::string::iterator _cur = std::begin(_expr);
  std::stack<std::pair<operator_t, double>> mid;
  double fretval;

  /**
   * @brief Get the Operator object
   *
   * @return auto
   */
  auto getOperator() {
    switch (*_cur) {
      case '+':
        _cur++;
        return operator_t(enum_op_t::OP_ADD, 1, 'L');
      case '-':
        _cur++;
        return operator_t(enum_op_t::OP_SUB, 1, 'L');
      case '*':
        _cur++;
        return operator_t(enum_op_t::OP_MUL, 2, 'L');
      case '/':
        _cur++;
        return operator_t(enum_op_t::OP_DIV, 2, 'L');
      default:
        return operator_t(enum_op_t::NULLTYPE);
        break;
    }
  }

/**
 * @brief Get the Numerical object
 * 
 * @return auto 
 */
  auto getNumerical() {
    std::string::iterator _tmp = _cur;
    for (; std::isdigit(*(_tmp)) || *_tmp == '.'; ++_tmp) {
    }
    std::string tstr = std::string(_cur, _tmp);
    if (!std::regex_match(tstr, std::regex{"[+-]?([0-9]*[.])?[0-9]+"})) {
      throw std::runtime_error(
          "error: could not parse token, expect <int> or <float>.\n");
    }
    auto retval = std::stod(tstr);
    _cur = _tmp;
    return retval;
  };

/**
 * @brief PerformOp
 * 
 * @param var 
 * @param lhs 
 * @param rhs 
 * @return auto 
 */
  auto performOp(operator_t var, double lhs, double rhs) {
    switch (var._type) {
      case enum_op_t::OP_ADD:
        return lhs + rhs;
      case enum_op_t::OP_DIV:
        if (!rhs) {
          throw std::runtime_error("error: division by zero.\n");
        } else
          return lhs / rhs;
      case enum_op_t::OP_MUL:
        return lhs * rhs;
      case enum_op_t::OP_SUB:
        return lhs - rhs;
      default:
        return 0.0;
    }
  }

/**
 * @brief Get the Value object
 * 
 * @return double 
 */
  double getValue() {
    double retval = 0;
    switch (*_cur) {
      case '0':
      case '1':
      case '2':
      case '3':
      case '4':
      case '5':
      case '6':
      case '7':
      case '8':
      case '9':
        retval = getNumerical();
        break;
      case '(':
        _cur++;
        retval = evaluate();
        if (*_cur != ')') {
          if (_cur <= std::end(_expr)) throw std::runtime_error("error");
          throw std::runtime_error("error: value expected, got token.\n");
        }
        _cur++;
        break;
      case '+':
        _cur++;
        retval = getValue();
        break;
      case '-':
        _cur++;
        retval = getValue() * (-1);
        break;
      default:
        throw std::runtime_error(
            "error: unexpected expression, could not parse.\n");
    }
    return retval;
  }

/**
 * @brief Evaluate object
 * 
 * @return double 
 */
  double evaluate() {
    mid.push({operator_t{enum_op_t::NULLTYPE}, 0});
    double retval = getValue();
    while (!mid.empty()) {
      operator_t var{getOperator()};
      while (
          var._priority < mid.top().first._priority ||
          (var._priority == mid.top().first._priority && var._assoc == 'L')) {
        if (mid.top().first._type == enum_op_t::NULLTYPE) {
          mid.pop();
          return retval;
        }
        retval = performOp(mid.top().first, mid.top().second, retval);
        mid.pop();
      }
      mid.push({var, retval});
      retval = getValue();
    }
    return 0;
  }

 public:
  static auto &getInstance(std::string const &expr) {
    Calculator c(expr);
    return c;
  }
};

/**
 * @brief Main function of the Cpp program
 * 
 * @return int 
 */
int main() {
  for (;;) {
    std::cout << "<Part 1. calculate: > ";
    std::string input;
    std::getline(std::cin, input);
    Calculator::getInstance(input);
  }
  return 0;
}