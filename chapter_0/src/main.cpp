#include <iostream>

#include "class_test.hpp"

int main(int argc, char **argv) {
  ClassTest test;
  test.setTestParameter(10);
  std::cout << "Test object 1: " << test.getTestParameter() << std::endl;

  ClassTest test1(15);
  std::cout << "Test object 2: " << test.getTestParameter() << std::endl;

  ClassTest test2;
  int a = test2.sum(1, 2);
  double b = test2.sum(1.5, 2.5);

  std::cout << "Int: " << a << " , Doubling: " << b
            << ", Template: " << test2.sum<int, double>(1, 2.5) << std::endl;
  if (argc == 3) {
    std::cout << test2.sum(std::atoi(argv[1]), std::atoi(argv[2])) << std::endl;
  }
  return 0;
}