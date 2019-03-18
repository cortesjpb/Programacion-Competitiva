#include <bits/stdc++.h>
using namespace std;

int T, N, H, resultado;
string s;
const char S[2] = {'0', '1'};

void backtracking() {
    if(s.length() == N){
        resultado = 0;
        for (auto i: s)
            resultado += (i - '0');
        if (resultado == H)
            cout << s << endl;
        return;
    }
    s.push_back(S[0]);
    backtracking();
    s.pop_back();
    s.push_back(S[1]);
    backtracking();
    s.pop_back();
}

int main() {

    //freopen("entrada.txt", "r", stdin);

    cin >> T;
    while (T--) {
        cin >> N >> H;
        backtracking();
        if (T)
            cout << endl;
    }
    return 0;
}
