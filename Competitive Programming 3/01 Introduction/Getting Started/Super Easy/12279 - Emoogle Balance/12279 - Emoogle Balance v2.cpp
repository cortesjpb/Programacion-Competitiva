#include <bits/stdc++.h>
using namespace std;

int N, cero, num, n, T = 1;

int main() {
    while (scanf("%d",&N)!= 0) {
        cero = 0;
        n = N;
        while(n--) {
            cin >> num;
            if (num == 0)
                cero++;
        }
        cout << "Case " << T << ": " <<  N-(cero*2) << endl;
        T++;
    }
    return 0;
}
