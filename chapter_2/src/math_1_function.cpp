#include "math_1_function.hh"
#include "math_function.hh"

namespace function {

    double volume(double gjatesia, double gjeresia, double lartesia) {
        double siperfaqja = Math::prodhimi(gjatesia, gjeresia);
        double vellimi = Math::prodhimi(siperfaqja, lartesia);
        return vellimi;
  }
} // namespace function