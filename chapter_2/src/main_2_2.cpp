#include <iostream>

#include "math_function.hh"
#include "math_1_function.hh"

int main(int argc, char **argv) {
  std::cout << "Mbledhja: " << Math::mbledhja(5.3, 4.2) << "\n";
  std::cout << "Zbritja: " << Math::zbritja(5.3, 4.2) << "\n";
  std::cout << "Prodhimi: " << Math::prodhimi(5.3, 4.2) << "\n";
  std::cout << "Pjestimi: " << Math::pjestimi(5.3, 4.2) << "\n";
  std::cout << "Vellimi: " << function::volume(5.5,5.3,5.1)<<"\n";

  return 0;
}