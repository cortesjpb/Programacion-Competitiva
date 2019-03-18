#include <bits/stdc++.h>
using namespace std;

string s;
int espacios, N, P;
char str[4001];
vector<pair<int, int>> v;

int main() {
    //freopen("entrada.txt", "r", stdin);
    cin >> N;
    pair<int, int> p;
    while (N--) {
        v.clear();
        cin >> P;
        gets(str);
        for (int i = 1; i <= P; i++) {
            gets(str);
            s = str;
            espacios = 0;
            for (auto j: s) {
                if (j == ' ')
                    espacios++;
            }
            p = {i, espacios};
            v.emplace_back(p);
        }
        stable_sort(v.begin(), v.end(), [](pair<int,int> a, pair<int,int>b) { return a.second < b.second; });
        cout << v[0].first;
        for (int i = 1; i <= P; i++) {
            if (v[i].second == v[0].second)
                cout << " " << v[i].first;
            else
                break;
        }
        cout << endl;
    }
    return 0;
}
