#include <bits/stdc++.h>
//#include <math.h>
using namespace std;

void print(int arr[][3]);

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr), cout.tie(nullptr);
//
//    string samples[] = {
//            "first",
//            "second",
//            "third",
//            "forth"
//    };

    vector<string> v = {
            "first",
            "second",
            "third",
            "forth"
    };
    for (auto &sample : v) {
        sample += " the day";
        cout << sample << endl;
    }

    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << endl;
    }

    cout << "--------------------" << endl;
    int t = 0;
    string s;
    while (t--) {
        do {
            getline(cin, s);
        } while (s.length() == 0);

        cout << s << endl;
    }
    cout << "--------------------" << endl;
    cout << floor(4.3) << ' ' << ceil(6.5) << ' ' << trunc(332.3323) << " " << round(5.4);
    cout << endl << "--------------------" << endl;
    double pi = 3.14159;
    for (int i = 0; i < 6; i++)
        cout << fixed << setprecision(i) << pi << endl;

    int n = 5;
    switch (n * t) {
        case 1:
            cout << "it's odd..." << endl;
            break;
        case 0:
            cout << "it's even..." << endl;
            break;
        default:
            cout << n * t << endl;

    }
    cout << endl << "--------------------" << endl;

//    string elements[5];
//    for (string &element : elements) {
//        cin >> element;
//    }
//    cout << "this is the results: " << endl;
//    for (int i = elements->size(); i > -1; i--)
//        cout << elements[i] << ", ";
//    cout << endl;
    cout << endl << "--------------------" << endl;

    int N = 10, X = 3;
    double india = 0, srilanka = 0;
    india = floor(X / 2);
    srilanka = ceil((N - X) * (1.0) / (2));
    cout << "Srilanka " << srilanka << endl;
    int res = min(india, srilanka);
    cout << res;
    cout << endl;
    cout << endl << "--------------------" << endl;

    int arr[][3] = {{1, 2, 3},
                    {4, 5, 6},
                    {7, 8, 9}};
    print(arr);

    return 0;
}

void print(int arr[3][3]) {
    for (int i = 0; i < 3; i++)
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << " ";
            if (j % 3 == 2)
                cout << endl;
        }
}