#include <bits/stdc++.h>
using namespace std;

int a, b;

int mindist(int c, int d) {
    if (c - d < 50)
        return c-d;
    else
        return d +1+ (99-c);
}

int main() {
    while (cin >> a >> b) {
        if ((a == -1) and (b == -1))
            return 0;
        if (a > b)
            cout << mindist(a, b) << endl;
        else
            cout << mindist(b, a) << endl;
    }
    return 0;
}


