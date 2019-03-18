#include <bits/stdc++.h>
using namespace std;

int N, K, T, num, segundos;
int main() {
    //freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
        cin >> N >> K;
        vector<int> sectores(201, 0);
        vector<int> grifos;
        for(int i = 0; i < K; i++) {
            cin >> num;
            grifos.emplace_back(num);
            sectores[num] = 1;
        }

       segundos = 1;
       while (!all_of(sectores.begin()+1, sectores.begin()+N+1, [] (int j) { return j == 1; })) {
            for (int i = 0; i < K; i++) {
                if (all_of(sectores.begin()+1, sectores.begin()+N+1, [] (int j) { return j == 1; }))
                    break;
                else {
                    if (grifos[i]-segundos>0)
                        sectores[grifos[i]-segundos] = 1;
                    if (grifos[i]+segundos<=N)
                        sectores[grifos[i]+segundos] = 1;

                }
            }
            segundos++;
        }

        cout << segundos << endl;
        grifos.clear();
        fill(sectores.begin(), sectores.begin()+N+1, 0);
    }
    return 0;
}
