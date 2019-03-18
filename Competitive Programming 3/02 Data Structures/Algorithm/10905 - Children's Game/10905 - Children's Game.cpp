#include <bits/stdc++.h>
using namespace std;

int N;
vector<string> numeros(55);

int main() {
    while (cin >> N) {
        if (N == 0)
            return 0;
        for (int i = 0; i < N; i++)
            cin >> numeros[i];
        sort(numeros.begin(), numeros.begin()+N, [](string a, string b) {
                    if (a[0]!= b[0])
                        return a[0] > b[0];
                    if(a.size()!=b.size())
                        return a.size() < b.size();
                    else
                        return a[0] > b[0];
    });
        for (int i = 0; i < N; i++)
            cout << numeros[i];
        cout << endl;
    }
    return 0;
}
