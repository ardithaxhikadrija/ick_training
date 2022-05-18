#include <iostream>
#include "math_function.hh" //""../include/functions.h"

int main(int argc, char **argv) {
  std::cout << Math::mbledhja(4.5, 3.85) << std::endl;
  std::cout << Math::zbritja(4.5, 3.85) << std::endl;
  std::cout << Math::prodhimi(4.5, 3.85) << std::endl;
  std::cout << Math::pjestimi(4.5, 3.85) << std::endl;

  return 0;
}

