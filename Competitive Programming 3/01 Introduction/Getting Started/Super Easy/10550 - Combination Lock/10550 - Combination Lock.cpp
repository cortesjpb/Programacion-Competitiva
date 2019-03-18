#include <bits/stdc++.h>
using namespace std;

int num[4], total;

int main() {
    while (cin >> num[0] >> num[1] >> num[2] >> num[3]) {
        total = 720;
        if (num[0] > num[1])
            total += (num[0]-num[1])*9;
        else
            total += (40-(num[1]-num[0]))*9;
        total += 360;
        if (num[1] < num[2])
            total += (num[2]-num[1])*9;
        else
            total += (40-(num[1]-num[2]))*9;
        if (num[2] > num[3])
            total += (num[3]-num[2])*9;
        else
            total += (40-(num[2]-num[3]))*9;

        cout << total << endl;
    }
    return 0;
}
