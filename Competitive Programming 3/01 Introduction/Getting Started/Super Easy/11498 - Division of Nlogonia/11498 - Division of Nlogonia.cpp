/* @JUDGE_ID: 874259 11498 C++11  */

#include <iostream>
using namespace std;

int n, m, k, x, y;

int main(){
	
		//freopen("entrada.in", "r", stdin);
		
		cin >> k;
		while(k){
			cin >> n >> m;
			while (k){
				cin >> x >> y;
				if (x == n or y == m){
					cout << "divisa" << endl;
					k--;
					continue;
				}
				if (x > n and y > m)
					cout << "NE" << endl;
				else if (x < n and y > m)
					cout << "NO" << endl;
				else if (x > n and y < m)
					cout << "SE" << endl;
				else
					cout << "SO" << endl;
								
				k--;
			}
			cin >> k;
		}
	return 0;
}
