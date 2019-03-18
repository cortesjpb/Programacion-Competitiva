#include <bits/stdc++.h>
using namespace std;

int N, M, K, v;
unsigned long long ctotal;
double total;
int valor[105];
char letra[105];
string s;
char parrafo[10100];
char c;


int main(){
    //freopen("entrada.in", "r", stdin);

    cin >> N;

    while(N){
        ctotal = 0;
        cin >> K;
        for (int i = 0; i < K; i++){
            cin >> c >> v;
            letra[i] = c;
            valor[i] = v;
        }

        cin >> M;
        cin.ignore();
        while(M){
            gets(parrafo);
            s = parrafo;
            for (int i = 0; i < s.length(); i++){
                for (int j = 0; j < K; j++){
                    if (parrafo[i] == letra[j]){
                        ctotal += valor[j];
                        break;
                    }
                }
            }
            M--;
        }
        total = ctotal/100.0;
        N--;
        cout << setprecision(2) << fixed << total << "$" << endl;
    }
    return 0;
}
