#include <bits/stdc++.h>
using namespace std;

int N, M;
vector<int64_t> a, b;

int main() {
    cin >> N >> M;
    a.resize(N);
    b.resize(M);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    for (int i = 0; i < M; i++)
        cin >> b[i];
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    int64_t grande = ((a[1] % INT64_MAX) * (b[0] % INT64_MAX)) % INT64_MAX;
    int64_t chico =  ((a.back()-1 % INT64_MIN) * (b.back() % INT64_MIN)) % INT64_MAX;
    if (grande > chico)
        cout << grande;
    else
        cout << chico;

    /*if (a[1]>0 and b[0]>0) {
        int64_t resultado = ((a[1] % INT64_MAX) * (b[0] % INT64_MAX)) % INT64_MAX;
        cout << resultado;
    } else {
        int64_t resultado = ((a[1] % INT64_MIN) * (b[0] % INT64_MIN)) % INT64_MIN;
        cout << resultado;
    }*/
    return 0;
}
