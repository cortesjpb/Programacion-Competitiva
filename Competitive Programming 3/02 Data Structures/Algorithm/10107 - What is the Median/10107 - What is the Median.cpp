#include <bits/stdc++.h>
using namespace std;

long long num, media;
vector<long long> v;

int main() {
    v.clear();
    while (cin >> num) {
        v.push_back(num);
        sort(v.begin(), v.end());
        if (v.size() % 2 != 0) {
            media = (v.size() / 2) +1;
            cout << v[media-1] << endl;
        } else {
            media = v.size()/2;
            cout << (v[media]+v[media-1])/2 << endl;
        }
    }
    return 0;
}
