// #include<bits/stdc++.h>
// using namespace std;

// int *ptr; // global pointer variable, it will be stored in data segment of memory

// void fun(){
// int x = 10; // it stores 4 byte space in stack memory
// ptr = &x; // assign the address of x to the global pointer variable ptr
// cout << "Value of ptr: " << *ptr << endl; // output: 10
// return;
// }

// int main(){
//     fun(); // call the function to create a stack frame and allocate memory for x
//     cout << "Value of ptr: " << *ptr << endl; // output: 10
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;

int *ptr; // global pointer variable, it will be stored in data segment of memory

void fun(){
int *x = new int(10); // it stores 4 byte space in heap memory
ptr = x; // assign the address of x to the global pointer variable ptr
cout << "Value of ptr: " << *ptr << endl; // output: 10
return;
}

int main(){
    fun(); // call the function to create a stack frame and allocate memory for x
    cout << "Value of ptr: " << *ptr << endl; // output: 10
    delete ptr; // deallocate the memory allocated in the heap
    return 0;
}