/**
 *
 * Problem - https://codeforces.com/problemset/problem/1328/A
 * Author: Suraj Gupta
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long a, b;
        cin >> a >> b;
        long c = ceil(1.0 * a / b);
        c = c * b;
        cout << c-a << endl;
    }
    return 0;
}


