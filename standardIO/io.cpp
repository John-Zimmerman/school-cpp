#include <iostream>
#include <string>

int main(){
    std::string myStr1, myStr2;

    std::cout << "What is your first name?" << std::endl;
    std::cin >> myStr1;

    std::cout << "What is your last name?" << std::endl;
    std::cin >> myStr2;

    std::cout << "Your name is: " << myStr1 << " " << myStr2 << std::endl;
    return 0;
}

//! I can't find out how to add a space between two added strings. The final output line is, "myStr1myStr2".
// Solved by adding << "" << inbetween string variables in cout line 12