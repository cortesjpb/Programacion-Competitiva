#include <bits/stdc++.h>
using namespace std;

int adjmat[10][30];
int T, N, M;
bool simple;

int main() {
    freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
        cin >> N >> M;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                cin >> adjmat[i][j];
            }
        }
        simple = true;
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                if (i == j)
                    continue;
                if (adjmat[i][j] != adjmat[j][i])
                    continue;
                else
                    simple = false;
            }
        }

        for (int i = 0; i < N; i++) {
            for (int j = 0; j < M; j++) {
                adjmat[i][j] = -1;
            }
        }
        (simple) ? cout << "Yes" << endl : cout << "No" << endl;
    }
    return 0;
}
