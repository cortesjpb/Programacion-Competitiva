#include <bits/stdc++.h>
using namespace std;

char str[100];
int N;
string s, num;
vector<int> numeros;

int main() {
    freopen("entrada.txt", "r", stdin);
    while (gets(str)) {
        s = str;
        if (s.length() > 1) {
            num = "";
            for (auto c: s) {
                if (c != ' ')
                    num += c;
                else {
                    numeros.emplace_back(stoi(num));
                    num.clear();
                }
            }
            numeros.emplace_back(stoi(num));
        } else {
            N = stoi(s);
            gets(str);
        }
        for (auto i: numeros)
            cout << i << " ";
        cout << endl;
        numeros.clear();
    }
    return 0;
}
