// C++ program to sort an array with Eigen adn stl sort
#include <iostream>
#include <algorithm>
#include <Eigen/Dense>

// Driver code
int main()
{
    Eigen::ArrayXi v(9);
    v << 5, 3, 8, 1, 4, 19, 22, 2, 7;
    std::cout << "Here is the initial vector v:\n" << v.transpose() << "\n";
    std::sort(v.data(), v.data() + v.size());
    std::cout << "Here is the sorted vector v:\n" << v.transpose() << "\n";

}