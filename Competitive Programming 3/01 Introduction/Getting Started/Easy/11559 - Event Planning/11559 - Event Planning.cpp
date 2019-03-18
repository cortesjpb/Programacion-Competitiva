/* @JUDGE_ID: 874259 11559 C++11  */

#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

int n, b, h, w, p, a;
vector<int> pre;

int main(){
    //freopen("entrada.in", "r", stdin);

    while(cin >> n){
        cin >> b >> h >> w;
        for (int i = 0; i < h; i++){
            cin >> p;
            for (int j = 0; j < w; j++){
                cin >> a;
                if (a >= n and (n*p)<= b){
                    pre.push_back((n * p));
                }
            }
        }

        if(pre.empty()){
            cout << "stay home" << endl;
        }
        else{
            stable_sort(pre.begin(), pre.end());
            cout << pre.front() << endl;
            pre.clear();
        }
    }
    return 0;
}
