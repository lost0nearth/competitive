/**
 *
 * Problem - https://www.hackerrank.com/challenges/lowest-triangle/problem
 * Author: Suraj Gupta
 *
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    long b, a;
    cin >> b >> a;
    long ans  = ceil(2.0 * a / b);
    cout << ans;
    return 0;
}


