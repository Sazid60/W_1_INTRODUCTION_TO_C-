// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     //  normal cpp array 
//     int a[5];
//     for(int i=0; i<5; i++){
//         cin >> a[i];
//     }
//     for(int i=0; i<5; i++){
//         cout << a[i] << " ";
//     }
//     return 0;
// }

#include<bits/stdc++.h>
using namespace std;

int main(){
    //  dynamic array using pointer variable
    int *a = new int[5]; // it stores 20 byte space in heap
    for(int i=0; i<5; i++){
        cin >> a[i];
    }
    for(int i=0; i<5; i++){
        cout << a[i] << " ";
    }
    delete[] a; // deallocate the memory allocated in the heap
    return 0;
}