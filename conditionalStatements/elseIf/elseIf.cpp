#include <iostream>

using namespace std;

int main(){
    int i = 10;
    int n = 5;

    if (i < n) {
        std:cout << "false" << std::endl;
    } else if (i == n) {
        std::cout << "false" << std::endl;
    } else if (i > n) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "error" << std::endl;
    }
    return 0;
}