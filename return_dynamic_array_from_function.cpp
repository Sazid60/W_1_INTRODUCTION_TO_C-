#include<bits/stdc++.h>
using namespace std;

int* fun(){
    int *a = new int[5]; // it stores 20 byte space in heap
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    return a; // return the address of the first element of the array
}

int main(){

    int* ptr = fun();
    
    for(int i=0; i<5; i++){
        cout << ptr[i] << " ";
    }
    delete[] ptr;
    return 0;
}