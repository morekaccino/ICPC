//
// Created by mrkaz on 2019-02-18.
//

#include <bits/stdc++.h>

using namespace std;

int fibo(int n);

int main() {

    for (int i = 0; i < 21; i++)
        cout << i << " ->\t" << fibo(i) << endl;

    return 0;
}

int fibo(int n) {
    if (n <= 1)
        return n;
    return fibo(n-1) + fibo(n-2);
}