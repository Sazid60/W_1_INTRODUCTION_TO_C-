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