#include <bits/stdc++.h>
using namespace std;

int N;
vector<int> coins = {1, 5, 10, 25, 50};
long long memo[6][30005];

long long ways (long long type, long long value) {
    if (value == 0) return 1;
    if (value < 0 || type == 5) return 0;
    if (memo[type][value] != -1) return memo[type][value];
    memo[type][value] = ways(type+1, value) + ways(type, value-coins[type]);
    return memo[type][value];
}

int main() {
    memset(memo, -1, sizeof (memo));
    while (cin >> N) {
        long long resultado = ways(0, N);
        if (resultado == 1)
            cout << "There is only 1 way to produce " << N << " cents change." << endl;
        else
            cout << "There are " << resultado << " ways to produce " << N << " cents change." << endl;;
    }
    return 0;
}
