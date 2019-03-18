#include <bits/stdc++.h>
using namespace std;

long long N;
string s;
bool arriba;
int x, y, sc;

int main() {
    cin >> N >> s;
    x = y = sc = 0;
    if (s[0] == 'R') { x++; arriba=false; }
    else { y++; arriba=true; }
    s.erase(s.begin());
    for (auto i: s) {
        if (i == 'R') x++;
        else y++;
        if (arriba) {
            if(x<=y)
                continue;
            else {
                sc++;
                arriba = false;
            }
        } else {
            if(y<=x)
                continue;
            else {
                sc++;
                arriba = true;
            }
        }
    }
    cout << sc;
    return 0;
}
