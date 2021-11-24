/**
 * @file main_1_5.cpp
 * @author Ardit Haxhikadrija (ardithaxhikadrija1@gmail.com.com)
 * @brief Lesson on displaying the variables values
 * @version 0.1
 * @date 2021-11-24
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

// I am a global variable
double test_double_variable = 10.2;  // Here I have declare value 10.2

// I am a global unsigned double variable
// Based on IEEE 754-2008, most hardware does not support unsigned, therefor it
// is stopped
double test_unsigned_double_variable = 1.3;

/**
 * @brief Main function in CPP
 *
 * @param argc Argument count object
 * @param argv Ardument vector object
 * @return int 0 on success, else -1
 */

int main(int argc, char **argv) {
  // Printing global variables
  std::cout << "Printing global variables..." << std::endl;
  std::cout << "Test_double_variable: " << test_double_variable
            << std::endl;  // Printing the value of global variable
  std::cout << "Test_unsigned_double_variable: "
            << test_unsigned_double_variable
            << std::endl;  // Printing the value of global variable

  // Printing local variables
  std::cout << "Printing local variables..." << std::endl;

  // I am an int variable inside a function
  int test_int_variable = -15;
  std::cout << "test_int_cariable: " << test_int_variable
            << std::endl;  // Printing int value
  unsigned int test_unsigned_int_variable;

  test_unsigned_int_variable = 15;
  std::cout << "test_unsigned_int_variable: "
            << test_unsigned_int_variable  // Printing unsigned int value
            << std::endl;

  double global_var_sum = test_double_variable + test_unsigned_double_variable;
  std::cout << "global_var_sum: " << global_var_sum
            << std::endl;  // Printing the sum of the global variables

  // I am declaring multiple init_8 variables inside of a function
  int8_t test_int8_variable_1 = {120};
  int8_t test_int8_variable_2, test_int8_variable_3;

  test_int8_variable_2 = (66);
  test_int8_variable_3 = {24};
  std::cout << "test_int8_variable_1: "
            << static_cast<unsigned>(test_int8_variable_1) << std::endl;
  // Printing int8_t value as number
  std::cout << "test_int8_variable_2: "
            << static_cast<unsigned>(test_int8_variable_2) << std::endl;
  // Printing int8_t value as number
  std::cout << "test_int8_variable_3: "
            << static_cast<unsigned>(test_int8_variable_3) << std::endl;
  // Printing int8_t value as number

  return 0;
}