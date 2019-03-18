#include <bits/stdc++.h>
using namespace std;

vector<int> tengo;
vector<int> angulos;
vector<int> resultados;

int N, aux, total;

int main() {
    while (cin >> N) {
        angulos.clear();
        tengo.clear();
        resultados.clear();
        for (int i = 0; i < N; i++) {
            cin >> aux;
            angulos.emplace_back(aux);
        }
        total = 0;
        for(int i = 0; i < N;) {
            total += angulos[i];
            tengo.emplace_back(angulos[i]);
            if (total > 180) {
                resultados.emplace_back(abs(360-total-total));
                total -= tengo.front();
                tengo.erase(tengo.begin());
            }
            resultados.emplace_back(abs(360-total-total));
            i++;
        }

        for(int i = 0; i < N;) {
            total += angulos[i];
            tengo.emplace_back(angulos[i]);
            if (total > 180) {
                resultados.emplace_back(abs(360-total-total));
                total -= tengo.front();
                tengo.erase(tengo.begin());
            }
            resultados.emplace_back(abs(360-total-total));
            i++;
        }

        cout << *min_element(resultados.begin(), resultados.end());
    }
    return 0;
}
