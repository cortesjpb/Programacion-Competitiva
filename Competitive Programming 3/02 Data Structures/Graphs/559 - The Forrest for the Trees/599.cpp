#include <bits/stdc++.h>
using namespace std;

int T, e, ac, v, cc;
bitset<26> edges;
string s;

int main() {
    //freopen("entrada.txt", "r", stdin);

    cin >> T;
    while (T--) {
        e = 0;
        edges.reset();
        cin >> s;
        while(s[0] != '*') {
            edges[s[1]-'A'] = 1;
            edges[s[3]-'A'] = 1;
            e++;
            cin >> s;
        }
        cin >> s;
        v = (s.length()/2)+1;

        ac = (v-edges.count());
        cc = v-e-ac;

        cout << "There are " << cc << " tree(s) and " << ac << " acorn(s)." << endl;

    }
    return 0;
}
