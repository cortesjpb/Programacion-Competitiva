#include <bits/stdc++.h>
using namespace std;

long long K;
vector<pair<int, int>> v = {{2, 8}, {1, 0}};
string s;

int main() {
    cin >> K;
    long long loops = 0;
    while (loops < K and s.length()<20) {
        if (loops+v[0].first <= K) {
            s += to_string(v[0].second);
            //cout << v[0].second;
            loops += v[0].first;
        } else if (loops+v[1].first <= K) {
            s += to_string(v[1].second);
            //cout << v[1].second;
            loops += v[1].first;
        } else
            break;
    }
    uint64_t resultado = stoull(s);
    /*if (stoull(s)<=1000000000000000000)
        cout << s;
    else
        cout << -1;*/
    return 0;
}
