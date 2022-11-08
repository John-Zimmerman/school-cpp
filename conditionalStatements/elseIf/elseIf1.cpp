#include <iostream>
#include <string>

int main(){
    int a;
    int b;

    std::cout << "Pick a whole number that represents the variable, a: " << std::endl;
    std::cin >> a;

    std::cout << "Pick a whole number that represents the variable, b: " << std::endl;
    std::cin >> b;

    if (a < b) {
        std::cout << "Variable, a is lesser than variable, b." << std::endl;
    } else if (a > b) {
        std::cout << "Variable, a is greater than variable, b." << std::endl;
    } else if (a == b) {
        std::cout << "Variable, a is equal to variable, b" << std::endl;
    } else {
        std::cout << "Error" << std::endl;
    }
    return 0;
}