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
