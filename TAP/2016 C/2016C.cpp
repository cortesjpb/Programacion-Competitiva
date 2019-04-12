#include <bits/stdc++.h>
using namespace std;

vector< vector<int> > g(500010);

int correlativas[500010];
bool aprobadas[500010];
int N, M, a, b, total;

void dfs(int v) {
    if (aprobadas[v] == 1 && correlativas[v] == 0) {
            total++;
        for (int i = 0; i < g[v].size(); i++) {
            correlativas[g[v][i]]--;
            dfs(g[v][i]);
        }
    }
}

int main() {
    //freopen("entrada.txt", "r", stdin);

    while (cin >> N >> M) {
        for (int i = 1; i <= N; i++) {
            correlativas[i] = 0;
            aprobadas[i] = false;
            g[i].clear();
        }

        for (int i = 0; i < M; i++) {
            cin >> a >> b;
            g[a].push_back(b);
            correlativas[b]++;
        }

        total = 0;
        for (int i = 0; i < N; i++) {
            cin >> a;
            aprobadas[a] = true;
            dfs(a);
            cout << total << endl;
        }
    }

    return 0;
}
