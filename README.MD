# W_1_INTRODUCTION_TO_C++

## W_1_M_1_BASIC_C++

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

- taking input and showing outuput in c is far more easier like we dont have to declare the format specifier 

```cpp
#include<iostream>
int main(){
    int x; 
    // scanf("%d", &x);
    std::cin >> x;
    // printf("%d\n", x);
    std:: cout << x << std:: endl;
    return 0;
}
```

- we can avoid writing `std` again and again 


```cpp
#include<iostream>
using namespace std;
int main(){
    int x; 
    char c ;
    double d;
    cin >> x >> c >> d;
    cout << x << " " << c << " " << d << endl;
    return 0;
}
```

- if we want to print the ascchi value of the character what are going to do? we have no format specifire usage in cpp?

- we can definitely print the assci value of the character

```cpp

#include<iostream>
using namespace std;
int main(){
    int x; 
    char c ;
    double d;
    cin >> x >> c >> d;
    int ascii_value = c; // Convert char to its ASCII value
    cout << ascii_value << endl; // Print the ASCII value of the character  
    cout << x << " " << c << " " << d << endl;
    return 0;
}
```

- we can also do type casting for printing the assci value

```cpp
#include<iostream>
using namespace std;
int main(){
    int x; 
    char c ;
    double d;
    cin >> x >> c >> d;
    int ascii_value = c; // Convert char to its ASCII value
    cout << ascii_value << endl; // Print the ASCII value of the character  
    cout << x << " " << c << " " << d << endl;

    
//  type casting 
    char a = 'k';
    int y = 65;
    cout << (int)a << endl; // Print ASCII value of 'k'
    cout << (char)y << endl; // Print character corresponding to ASCII value 65
    return 0;
}
```

- `EOF`- End of file in C++

```cpp
#include<iostream>
using namespace std;
int main(){
    //  we have no fixed input numbers  we have to take input untill it ends 
    int x;
    while(cin >> x){ // This loop will continue until there is no more input (EOF)
        cout << x << endl; // Print the input number
    }
    return 0;
}

```

- `set precision` 

```cpp 
#include<iostream>
#include<iomanip> // for setprecision
using namespace std;
int main(){

    double d =23.45676;
    //cout << d << endl; 
    
    // Default precision (usually 6 digits after the decimal point


    // printf("%.2f\n", d); 
    
    // Print with 2 digits after the decimal point. we cant doit because in c+ we dont have format specifier;
    
    cout << fixed << setprecision(2) << d << endl; 
    // Print with 2 digits after the decimal point
    return 0;

}
```

- even odd in c++

```cpp
#include<iostream>
using namespace std;
int main(){
    int x= 13;
    if(x%2==0){
        cout << "Even" << endl;
    }
    else{
        cout << "Odd" << endl;
    }
    return 0;
}
```

- when there is basic if else and and the condition has on task to do the we can go for ternary operator 

- (condition) ? T : F
```cpp
#include<iostream>
using namespace std;
int main(){
    int x= 19;
    x%2 == 0? cout << "Even" << endl : cout << "Odd" << endl;
    return 0;
}
```

- `switch case` in c++

```cpp
#include<iostream>
using namespace std;
int main(){
    int day;
    cin>>day;
    switch(day){
        case 1:
            cout<<"saturday";
            break;
        case 2:
            cout<<"sunday";
            break;
        case 3:
            cout<<"monday";
            break;
        case 4:
            cout<<"tuesday";
            break;
        case 5:
            cout<<"wednesday";
            break;
        case 6:
            cout<<"thursday";
            break;
        case 7:
            cout<<"friday";
            break;
        default:
            cout<<"invalid input";
    }
    return 0;
}
```

- max min in cpp

```cpp

#include<iostream>
#include<algorithm> // for max min 
using namespace std;
int main (){
    int a,b;
    cin >> a >> b;
    // cout<< max(a,b) << endl;
    cout<< min(a,b) << endl;
    return 0;
}


```

- max min can fin max min from in whatever we define


```cpp
#include<iostream>
#include<algorithm> // for max min 
using namespace std;
int main (){
    int a,b;
    cin >> a >> b;
    // cout<< max(a,b) << endl;
    // cout<< min(a,b) << endl;
    cout << min({3,5,7,10,12}) << endl;
    //  in c we had to swap with the temporary variables.
    // in c++ we have builtin swap function 
    swap(a,b);
    cout << a << " " << b << endl;
    
    return 0;
}

```

- taking string with cpp

```cpp
#include<iostream>
using namespace std;
int main(){
char s[100];
// fgets(s,100,stdin); // it will read the string with spaces and store in s
cin.ignore(); // it will ignore the newline character left in the input buffer by previous input operations
cin.getline(s,100); // it will read the string with spaces and store in s
//  if we want to take input with space we have to use getline which is same as fgets   
cout<<s <<endl;
}
```

- in cpp we have builtin class where can directly declare string 
`
```cpp
#include<iostream>
using namespace std;
int main(){
    int x;
    string s;
    cin >> x >> s;
    return 0;
}
```
- this will not take space by the way.