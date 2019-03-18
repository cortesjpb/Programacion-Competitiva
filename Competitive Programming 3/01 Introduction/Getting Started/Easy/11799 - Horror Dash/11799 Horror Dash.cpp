#include <iostream>
#include <cstdio>
using namespace std;

int t, n, num, mayor;

int main(){
    //freopen("entrada.in", "r", stdin);
    cin >> t;
    for (int i = 1; i <= t; i++){
        cin >> n;
        while(n){
            cin >> num;
            if (num > mayor)
                mayor = num;
            n--;
        }
        cout << "Case " << i << ": " << mayor << endl;
        mayor = 0;
    }
    return 0;
}
