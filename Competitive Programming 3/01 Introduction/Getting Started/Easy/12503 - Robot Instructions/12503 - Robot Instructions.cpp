#include <bits/stdc++.h>
using namespace std;

int T, N, num, position;
vector<int> inst(105);
string s;

int movement(string str) {
    if (str == "LEFT")
        return -1;
    else if(str == "RIGHT")
        return 1;
    else{
        cin >> s;
        cin >> num;
        return inst[num-1];
    }
}

int main() {
    //freopen("entrada.txt", "r", stdin);
    cin >> T;
    while (T--) {
        position = 0;
        cin >> N;
        for (int i = 0; i < N; i++) {
            cin >> s;
            inst[i] = movement(s);
            position += inst[i];
        }
        cout << position << endl;
    }
    return 0;
}


