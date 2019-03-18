#include <bits/stdc++.h>
using namespace std;

int T, N;
vector<int> v(21);

int main() {
    cin >> T;
        while (T--) {
            cin >> N;
            for (int i = 0; i < N; i++)
                cin >> v[i];
            sort (v.begin(), v.begin()+N);
            cout << (v[N-1]-v[0])*2 << endl;
        }
    return 0;
}
