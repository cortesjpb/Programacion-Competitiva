#include <bits/stdc++.h>
using namespace std;

vector<int> nieto(3);

int main() {

    while (cin >> nieto[0] >> nieto[1] >> nieto[2]) {
        sort(nieto.begin(), nieto.end());
        if (nieto[0] == 1 and nieto[1] == 2) {
            cout << 'S' << endl;
        } else if (nieto[0] == 1 and nieto[1] == 3 and nieto[2] == 4) {
            cout << 'S' << endl;
        } else if (nieto[0] == 2 and nieto[1] == 3 and nieto[2] == 4) {
            cout << 'S' << endl;
        } else {
            cout << 'N' << endl;
        }
    }
    return 0;
}
