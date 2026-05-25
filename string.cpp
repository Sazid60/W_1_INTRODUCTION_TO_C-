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