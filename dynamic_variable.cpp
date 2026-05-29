#include<bits/stdc++.h>
using namespace std;

int main(){
int x = 10; // it stores 4 byte space in stack memory
//  declare a dynamic variable
int *ptr = new int(20); // it stores 4 byte space in heap memory and returns the address of that memory location
cout << "Value of ptr: " << *ptr << endl; // output: 20
delete ptr; // free the dynamically allocated memory
return 0;
}