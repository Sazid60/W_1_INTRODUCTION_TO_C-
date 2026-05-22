#include <iostream>

int main()
{
    int x=10;
    // printf("The value of x is: %d\n", x); we dont need format specifiers in cpp
    char c = 'A';
    double d = 3.14;
    std::cout << x << std::endl << c << std::endl << d << std::endl; // we can print multiple variables in one line without format specifiers

    // printf("The value of x is: %d\n", x); // we can also use printf in cpp but we need to include cstdio header

    std::cout << "The value of x is: " << x << std::endl; // we can also print variables with some text without format specifiers

    return 0;
}