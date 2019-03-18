#include <bits/stdc++.h>
using namespace std;

#define INF 1e9

int T, N, price, V;
vector<int> coins(105), value(11005);
bool ready[11005];

int solve(int x) {
    if(x<0) return INF;
    if (x == 0) return 0;
    if (ready[x]) return value[x];
    int best = INF;
    for (int j = 0; j < N; j++)
        best = min(best, solve(x-coins[j])+1);

    value[x] = best;
    ready[x] = true;
    return best;
}

int main() {
    freopen("entrada.txt", "r", stdin);
    cin >> T;
    while(T--) {
        memset(ready, 0, sizeof ready);
        fill(value.begin(), value.end(), INF);
        cin >> price >> N;
        for (int i = 0; i < N; i++)
            cin >> coins[i];
        solve(10001);
        for (int i = price; i <= 10001; i++){
            if (ready[i] and value[i] != INF){
                cout << i << " " << value[i] << endl;
                break;
            }
        }
    }
    return 0;
}

