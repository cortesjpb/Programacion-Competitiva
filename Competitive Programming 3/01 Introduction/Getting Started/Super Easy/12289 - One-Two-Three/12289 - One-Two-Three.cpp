#include <bits/stdc++.h>
using namespace std;

int N;
string S;

int main() {
    while (cin >> N) {
        for (int i = 0; i < N; i++) {
            cin >> S;
            if (S.length() == 5)
                cout << 3 << endl;
            else if ((S[0]=='t' and S[1]=='w') or (S[0]=='t' and S[2]=='o') or (S[1]=='w' and S[2]=='o'))
                cout << 2 << endl;
            else
                cout << 1 << endl;
        }
    }
    return 0;
}
