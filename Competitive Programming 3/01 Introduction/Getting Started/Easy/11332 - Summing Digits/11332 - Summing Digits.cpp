#include <bits/stdc++.h>
using namespace std;

int N, resultado;
string s;

int main() {
    //freopen("entrada.txt", "r", stdin);
    while (cin >> s) {
            if (s == "0")
                return 0;
        while(s.length() > 1) {
            resultado = 0;
            for(auto i: s)
                resultado += i-'0';
            s = to_string(resultado);
        }
        cout << s[0] << endl;
    }
    return 0;
}
