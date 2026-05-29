#include<bits/stdc++.h>
using namespace std;

int main() {
    int a;
    cin >> a;

    int arr[a];

    for(int i = 0; i < a; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < a / 2; i++) {
        swap(arr[i], arr[a - i - 1]);
    }

    for(int i = 0; i < a; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}