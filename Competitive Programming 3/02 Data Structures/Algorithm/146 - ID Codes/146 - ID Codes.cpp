#include <bits/stdc++.h>
using namespace std;

string s;

int main() {
    while (cin >> s) {
        if (s == "#")
            return 0;
        if (next_permutation(s.begin(), s.end()))
            cout << s << endl;
        else
            cout << "No Successor" << endl;
    }
    return 0;
}
