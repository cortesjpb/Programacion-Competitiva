#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ULL;
const ULL modular = 1000000007;

vector<int> piratas(100005), cofres(100005);
ULL N, resultado, resta, hasta;
bool cumple;

int main() {
    freopen("entrada.txt", "r", stdin);

    while(cin >> N) {
        for (ULL i = 0; i < N; i++) {
            cin >> piratas[i];
        }

        for (ULL i = 0; i < N; i++) {
            cin >> cofres[i];
        }

        stable_sort(piratas.begin(), piratas.begin()+N);
        stable_sort(cofres.begin(), cofres.begin()+N);

        cumple = true;

        for (ULL i = 0; i < N; i++) {
            if (piratas[i] > cofres[i]) {
                cumple = false;
                break;
            }
        }

        if (!cumple){
            cout << 0 << endl;
            continue;
        } else {
            stable_sort(cofres.begin(), cofres.begin()+N, greater<ULL>());

            /*for(ULL i = 0; i < N; i++) {
                cout << cofres[i] << " ";
            }

            cout << endl;

            for(ULL i = 0; i < N; i++) {
                cout << piratas[i] << " ";
            }*/


            for(ULL i = 0; i < N; i++) {
                if (piratas[i] > cofres[i]){
                    hasta = i;
                    break;
                }
            }


            resultado = 1;
            for (ULL i = 1; i <= N; i++){
                resultado = ((resultado % modular) * (i % modular) % modular);
                //cout << resultado << endl;
            }

            resta = 0;
            if (hasta){
            resta = 1;
                for (ULL i = 1; i <= hasta; i++){
                    resta = ((resta % modular) * (i % modular) % modular);
                }
            }

            resultado -= resta;

            cout << (resultado % modular) << endl;

        }
    }
    return 0;
}
