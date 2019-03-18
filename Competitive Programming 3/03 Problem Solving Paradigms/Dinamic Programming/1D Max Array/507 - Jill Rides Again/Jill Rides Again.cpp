#include <bits/stdc++.h>
using namespace std;

int B, R, S, num, desde, hasta, maximo;

long long total;
struct estado {
    long long int total;
    short int desde, hasta, dist;
};

vector<estado> v(20009);

int main() {
    //freopen("entrada.txt", "r", stdin);
    //freopen("salida.txt", "w", stdout);
    cin >> B;
    R = 1;

    while (B--) {
        total = 0;
        desde = 1;
        cin >> S;
        for (int i = 1; i < S; i++) {
            cin >> num;
            if (total + num >= 0) {
                total += num;
                hasta = i+1;
            } else {
                total = 0;
                desde = i+1;
            }
            v[i].total = total;
            v[i].desde = desde;
            v[i].hasta = hasta;
            v[i].dist = hasta - desde;
        }

        sort(v.begin(), v.begin()+S, [](estado a, estado b){ return a.total > b.total;});
        maximo = v[0].total;
        int iguales = count_if(v.begin(), v.begin()+S, [](const estado s) { return s.total == maximo; });


        if (v[0].total == 0) cout << "Route " << R << " has no nice parts" << endl;
        else if (!iguales) cout << "The nicest part of route " << R << " is between stops " << v[0].desde << " and " << v[0].hasta << endl;
        else {
            sort (v.begin(), v.begin()+iguales, [] (estado a, estado b) {  return a.dist > b.dist; });
            iguales = count_if(v.begin(), v.begin()+iguales, [](const estado s) { return s.dist == v[0].dist; });
            if (!iguales) cout << "The nicest part of route " << R << " is between stops " << v[0].desde << " and " << v[0].hasta << endl;
            else {
                sort (v.begin(), v.begin()+iguales, [] (estado a, estado b) {  return a.desde < b.desde; });
                cout << "The nicest part of route " << R << " is between stops " << v[0].desde << " and " << v[0].hasta << endl;
            }
            /*for (int i = 0; i < S; i++) {
                cout << v[i].total << " " << v[i].desde << " " << v[i].hasta << " " << v[i].dist << endl;
            }*/
        }
        v[0].total = 0;
        v[0].desde = 0;
        v[0].hasta = 0;
        v[0].dist = 0;
        R++;
    }
    return 0;
}

