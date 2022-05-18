/**
 * @file main_1_5_1.cpp
 * @author Ardit Haxhikadrija (ardithaxhikadrija1@gmail.com.com)
 * @brief Lesson on assigning the variables values with cin
 * @version 0.1
 * @date 2021-11-26
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

/**
 * @brief Main function in CPP
 *
 * @param argc Argument count object
 * @param argv Ardument vector object
 * @return int 0 on success, else -1
 */

int main(int argc, char **argv) {
  // Printing local variables
  std::cout << "Printing local variables..." << std::endl;

  // Declaring test_int_variable and later with cin assigning value
  int test_int_variable{0};
  std::cout << "test_int_variable: input = ";
  std::cin >> test_int_variable;
  std::cout << "Test_int_variable output: " << test_int_variable << std::endl;

  // Declaring test_unsigned_int_variable and later with cin assigning value
  unsigned int test_unsigned_int_variable{0};
  std::cout << "test_unsigned_int_variable: input = ";
  std::cin >> test_unsigned_int_variable;
  std::cout << "Test_unsigned_int_variable output = "
            << test_unsigned_int_variable << std::endl;

  // I am declaring multiple init_8 variables inside of a function with value 0
  int8_t test_int8_variable_1[0], test_int8_variable_2[0],
      test_int8_variable_3[0];

  // Assigning values to int8_t variables

  std::cout << "test_int8_variable_1 = ";
  std::cin >> test_int8_variable_1;
  // Printing test_int8_variable_1 value as number
  std::cout << "test_int8_variable_1: " << test_int8_variable_1 << std::endl;
  
  std::cout << "test_int8_variable_2 = ";
  std::cin >> test_int8_variable_2;
  // Printing test_int8_variable_2 value as number
  std::cout << "test_int8_variable_2: " << test_int8_variable_2 << std::endl;

  std::cout << "test_int8_variable_3 = ";
  std::cin >> test_int8_variable_3;
  // Printing test_int8_variable_3 value as number
  std::cout << "test_int8_variable_2: " << test_int8_variable_3 << std::endl;

  return 0;
}