#include <bits/stdc++.h>
using namespace std;

int N, T, anterior, siguiente, t, HJ, LJ;

int main() {
    //freopen ("entrada.txt", "r", stdin);
    cin >> T;
    c = 1;
    while (t <= T) {
        HJ = LJ = 0;
        cin >> N >> anterior;
        for (int i = 1; i < N ; i++) {
            cin >> siguiente;
            if (anterior < siguiente) HJ++;
            if (anterior > siguiente) LJ++;
            anterior = siguiente;
        }
        cout << "Case " << c++ << ": " << HJ << " " << LJ << endl;
    }
    return 0;
}
