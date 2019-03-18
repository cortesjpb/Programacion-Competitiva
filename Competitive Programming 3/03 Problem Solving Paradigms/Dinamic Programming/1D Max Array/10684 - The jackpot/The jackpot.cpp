#include <bits/stdc++.h>
using namespace std;

vector<int> v(10009);
long N, total, num, maximo;


int main() {
    //freopen("entrada.txt", "r", stdin);
    while (cin >> N) {
            if (!N) return 0;
        total = 0;
        for (int i = 0; i < N; i++) {
            cin >> num;
            if (total + num >= 0) total += num;
            else total = 0;
            v[i] = total;
        }
        maximo = *max_element(v.begin(), v.begin()+N);
        if (maximo) cout << "The maximum winning streak is " << maximo << "." << endl;
        else cout << "Losing streak." << endl;
    }
    return 0;
}
