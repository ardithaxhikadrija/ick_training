#include <iostream>

int main(){

    int a;
    int prodh = 1;

    std::cout << "Input a positive number: ";
    std::cin >> a;

    if (a < 0){
        std::cout << "A POSITIVE NUMBER YOU IMBICILE" << std::endl;
    } else {
        for(int i = a; i > 0; i--){
            prodh *= i;
        }
        std::cout << "The factorial is: " << prodh << std::endl;
    }

    
    return 0;
}
