#include <iostream>

int main()
{
    int a[] = {1, 2, 3};
    for (int i = 2; i >= 0; i--){
        std::cout << a[i];
    }
    return 0;
}