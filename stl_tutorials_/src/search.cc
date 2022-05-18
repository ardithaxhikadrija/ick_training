// Binary search array members with STL and Eigen library
#include <algorithm>
#include <iostream>
#include <Eigen/Dense>
  
int main()
{
    Eigen::ArrayXi a(9);
    a << 5, 3, 8, 1, 4, 19, 22, 2, 7;

    std::cout << "The inputed array is : " << a.transpose() << std::endl;

    std::sort(a.data(), a.data() + a.size());
    std::cout << "\nThe array after sorting is : " << a.transpose() << std::endl;

    int search_number;
    std::cout << "\nEnter the number you  want to search: ";
    std::cin >> search_number;
    std::cout << "Now, we do the binary search";
    if (std::binary_search(a.data(), a.data() + a.size(), search_number))
          std::cout << "\nElement found in the array\n";
    else
        std::cout << "\nElement not found in the array\n";
  
    return 0;
}