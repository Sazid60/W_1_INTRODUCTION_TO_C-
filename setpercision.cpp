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