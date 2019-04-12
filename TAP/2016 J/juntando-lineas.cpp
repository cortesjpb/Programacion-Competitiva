#include <bits/stdc++.h>

using namespace std;

vector<int> numeros;

int main()
{
 	//freopen("prueba.txt","r",stdin);

	int n,l,c,k;
	int limite,cont = 0, resto=0;

	while(cin >> n)
	{
		cin >> l >> c ;
		for (int i = 0; i < n; i++)
		{
			cin >> k;
			numeros.push_back(k);
		}

		stable_sort(numeros.begin(), numeros.end() , greater<int>());


		limite = numeros.front();
		resto = c-numeros.front();
		while(!numeros.empty())
		{
			if (cont >= l){
				limite = numeros.front();
				if(resto < limite){
					cout << "N" << endl;
					break;
				}
				resto = resto-numeros.front();
				cont = 0;
				continue;
			}
			if (numeros.front() <= limite)
			{
				cont++;
				numeros.erase(numeros.begin());
			}
		}
		if(numeros.empty())
			cout << "S" << endl;

	numeros.clear();
	cont = 0;
	}
	return 0;
}