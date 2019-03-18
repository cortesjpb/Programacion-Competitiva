#include <iostream>
/* @JUDGE_ID: 874259 11727 C++11  */

#include <vector>
#include <algorithm>
using namespace std;

int t, survive, a, caso;
vector<int> salario(3);

int main(){
	//freopen("entrada.in", "r", stdin);
	cin >> t;
	caso = 1;
	while(t){		
		cin >> salario[0] >> salario[1] >> salario[2];
		sort(salario.begin(), salario.end());
		cout << "Case " << caso << ": " << salario[1] << endl;
		t--;
		caso++;
	}	
	return 0;
}
