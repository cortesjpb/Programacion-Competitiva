#include <bits/stdc++.h>
using namespace std;
int L;
string s, actual;

int main(){

    //freopen("entrada.txt", "r", stdin);
    cin >> L;
    while (L > 0){
        actual = "+x";
        for(int i = 0; i < L-1; i++){
            cin >> s;
            if (s == "No"){
                continue;
            }
            if(actual[1] == 'x'){
                actual[1] = s[1];
                if (actual[0] == '-'){
                    if (actual[0] == s[0])
                        actual[0] = '+';
                    else
                        actual[0] = '-';
                }
                else
                    actual[0] = s[0];
            }
            else if(actual[1] == s[1]){
                    actual[1] = 'x';
                    if (actual[0] == s[0])
                        actual[0] = '-';
                    else
                        actual[0] = '+';
                }
        }
        cout << actual << endl;
        cin >> L;
    }
    return 0;

}
