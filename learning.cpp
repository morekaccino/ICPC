#include <bits/stdc++.h>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);


    vector<int> v = {3, 2, 1, 13, 3, 4, 23, 5};
    int len = v.size();
    string sv = "", sc = "";
    sort(v.begin(), v.end());
    for (int i = 0; i < len; i++) {
        sv += to_string(v[i]) + " ,";
        sc += to_string(i) + " ,";
    }
    cout << sc << endl;
    cout << sv << endl;

    do {
        string input;
        getline(cin, input);
        int lookingFor = stoi(input);
        int a = 0, b = len - 1;
        int k;
        while (a != b) {
            k = (b + a) / 2;
            if (v[k] > lookingFor)
                b = k - 1;
            else if (v[k] < lookingFor)
                a = k + 1;
        }
        if (v[k] == lookingFor)
            cout << "YES, " << k << endl;
        else
            cout << "NO" << endl;
    } while (true);


    return 0;
}