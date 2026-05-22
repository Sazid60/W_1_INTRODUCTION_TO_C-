# W_1_INTRODUCTION_TO_C++

- first c++ code 

```cpp
#include<iostream>
int main(){
    std::cout<<"Hello World!"<<std::endl;
    return 0;
}
```

- print in cpp

```cpp
#include <iostream>

int main()
{
    std::cout << "Hello World!";
    return 0;
}
```

- we don't need format specifier like c to print 

```cpp
#include <iostream>

int main()
{
    int x=10;
    // printf("The value of x is: %d\n", x); we dont need format specifiers in cpp
    std::cout << x;
    return 0;
}
```

- print with space 

```cpp
#include <iostream>

int main()
{
    int x=10;
    // printf("The value of x is: %d\n", x); we dont need format specifiers in cpp
    char c = 'A';
    double d = 3.14;
    std::cout << x << " " << c << " " << d << std::endl; // we can print multiple variables in one line without format specifiers
    return 0;
}
```

- print with new line 

```cpp
#include <iostream>

int main()
{
    int x=10;
    // printf("The value of x is: %d\n", x); we dont need format specifiers in cpp
    char c = 'A';
    double d = 3.14;
    std::cout << x << std::endl << c << std::endl << d << std::endl; // we can print multiple variables in one line without format specifiers
    return 0;
}
```

- print variable with string 

```cpp
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
```