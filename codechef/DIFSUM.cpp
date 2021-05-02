/**
 *
 * Problem - https://www.codechef.com/problems/DIFFSUM
 * Author: Suraj Gupta
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    if (a > b){
        cout << a - b << endl;
    } else {
        cout << a + b << endl;
    }
    return 0;
}

