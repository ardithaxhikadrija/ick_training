/**
 * @file comments.cpp
 * @author Ardit Haxhikadrija (ardithaxhikadrija1@gmail.com.com)
 * @brief Lesson on declaring variables
 * @version 0.1
 * @date 2021-11-12
 *
 * @copyright Copyright (c) 2021
 *
 */

#include <iostream>

// I am global variable
double test_double_variable;

// I am a global unsigned double variable
// Based on IEEE 754-2008, most hardware does not support unsigned, therefor it
// is stopped
double test_unsigned_double_variable;

/**
 * @brief Main function in CPP
 *
 * @param argc Argument count object
 * @param argv Ardument vector object
 * @return int 0 on success, else -1
 */

int main(int argc, char **argv) {
  // I am an int variable inside a function
  int test_int_variable;
  unsigned int test_unsigned_int_variable;

  // I am declaring multiple init_8 variables inside of a function
  int8_t test_int8_variable_1, test_int8_variable_2, test_int8_variable_3;

  return 0;
}