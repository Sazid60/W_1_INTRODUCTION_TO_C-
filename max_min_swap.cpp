

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