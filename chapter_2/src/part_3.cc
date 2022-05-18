#include <iostream>

double Formula(double x, double a, double b) {
  for (int i = x; i < i + 5; i++) {
    double y = a + i - b;
    std::cout << "For x: " << i << ", the y is: " << y << std::endl;
  }

  return 0;
}

int main() {
  double num1, num2, num_x;
  std::cout << "This is a simple program to check five values from the "
               "formula, \nThe formula is: Y=A+X-B"
            << std::endl;
  std::cout << "Enter the first number: ";
  std::cin >> num1;
  std::cout << "Enter the secound number: ";
  std::cin >> num2;
  std::cout << "Enter the x number: ";
  std::cin >> num_x;
  Formula(num_x, num1, num2);

  return 0;
}