#include <bits/stdc++.h>
using namespace std;

int N, T, maximo;
vector<int> tracks(21);
vector<int> maxtracks, canciones;


void backtracking(int total, int j) {
    if (total > N)
        return;
    if (total > maximo) {
        maximo = total;
        maxtracks = canciones;
    }
    for (int i = j; i < T; i++) {
        canciones.push_back(tracks[i]);
        total += tracks[i];
        backtracking(total, i+1);
        total -= tracks[i];
        canciones.pop_back();
    }
}


int main() {
    //freopen("entrada.txt", "r", stdin);
    while (cin >> N) {
        maximo = 0;
        canciones.clear();
        cin >> T;
        for (int i = 0; i < T; i++)
            cin >> tracks[i];

        backtracking(0,0);

        for (auto i: maxtracks)
            cout << i << " ";
        cout << "sum:" << maximo << endl;
    }
    return 0;
}
