#include <bits/stdc++.h>
using namespace std;

int n, p, r, mr, caso;
string s, ms;
float d, md;
char c[80];

int main(){
    //freopen("entrada.in", "r", stdin);
    caso = 1;
    while (true){
        mr = md = 0;
        cin >> n >> p;
        if (n == 0)
            break;
        if(caso >= 2)
            cout << endl;
        n++;
        while(n){
            gets(c);
            n--;
        }

        while (p){
            gets(c);
            s = c;
            cin >> d >> r;
            if (r > mr){
                mr = r;
                md = d;
                ms = s;
            }
            else if (r == mr and d < md){
                md = d;
                ms = s;
            }
            r++;
            while (r){
                gets(c);
                r--;
            }
            p--;
        }
        cout << "RFP #" << caso << endl;
        cout << ms << endl;
        caso++;
    }


    return 0;
}
