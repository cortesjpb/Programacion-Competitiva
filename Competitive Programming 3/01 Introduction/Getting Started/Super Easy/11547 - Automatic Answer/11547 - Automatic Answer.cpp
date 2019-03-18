#include <bits/stdc++.h>
using namespace std;

int T, decenas;
long long N;
string s;

int main() {

    cin >> T;
    while (T--) {
        cin >> N;
        N *= 567;
        N /= 9;
        N += 7492;
        N *= 235;
        N /= 47;
        N -= 498;
        s = to_string(N);
        decenas = s.length()-2;
        cout << s[decenas] << endl;
    }

    return 0;
}
