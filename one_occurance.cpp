//
// Created by mrkaz on 2019-02-18.
//

#include <bits/stdc++.h>

using namespace std;

int findSingle(vector<int> elements) {
    int res = elements[0];
    int n = elements.size();
    cout << n << endl;
    for (int i = 1; i < elements.size(); i++)
        res = res ^ elements[i];
    return res;
}

int main() {
    vector<int> elements = {5, 5, 6, 7, 8, 3, 6, 7, 8};
    cout << findSingle(elements);

    int total = 0;
    vector<int> ex = {1, 2, 3, 4, 5, 34, 2, 34, 23, 45, 6, 78, 4,};
    for (auto &test : ex)
        total += test;
    cout << total;
    cout << endl;

    return 0;
}