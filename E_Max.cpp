#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long x, mx = 0;

    for(int i = 0; i < n; i++) {
        cin >> x;
        mx = max(mx, x);
    }

    cout << mx;

    return 0;
}