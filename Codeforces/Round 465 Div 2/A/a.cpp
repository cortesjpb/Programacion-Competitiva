#include <bits/stdc++.h>
using namespace std;

long long N, contador;

int main() {
    cin >> N;
    contador = 0;
    for (int i = 1; i < N; i++) {
        if (!(N % i))
            contador++;
    }
    cout << contador;
    return 0;
}
