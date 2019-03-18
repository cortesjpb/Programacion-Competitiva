#include <bits/stdc++.h>
using namespace std;

string s;
int T;

int main() {
    map<string, string> mapa;
    mapa["HELLO"] = "ENGLISH";
    mapa["HOLA"] = "SPANISH";
    mapa["HALLO"] = "GERMAN";
    mapa["BONJOUR"] = "FRENCH";
    mapa["CIAO"] = "ITALIAN";
    mapa["ZDRAVSTVUJTE"] = "RUSSIAN";
    T = 1;
    while (cin >> s) {
        if (s == "#")
            return 0;
        if (mapa.find(s) != mapa.end())
            cout << "Case " << T << ": " << mapa[s] << endl;
        else
            cout << "Case " << T << ": " << "UNKNOWN" << endl;
        T++;
    }

    return 0;
}
