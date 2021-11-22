/**
 * @file main_1_4.cpp
 * @author Ardit Haxhikadrija (ardithaxhikadrija1@gmail.com.com)
 * @brief Lesson on assigning variables
 * @version 0.1
 * @date 2021-11-22
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
  // I am an int variable inside a function
  int test_int_variable = -15;
  unsigned int test_unsigned_int_variable;

  test_unsigned_int_variable = 15;

  double global_var_sum = test_double_variable + test_unsigned_double_variable;
  // I am declaring multiple init_8 variables inside of a function
  int8_t test_int8_variable_1{125}, test_int8_variable_2, test_int8_variable_3;

  test_int8_variable_2 = int8_t(126);
  test_int8_variable_3 = int8_t(126);
  return 0;
}