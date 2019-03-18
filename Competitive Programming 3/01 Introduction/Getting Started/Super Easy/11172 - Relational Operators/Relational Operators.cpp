/* @JUDGE_ID: 874259 11172 C++11  */


#include <iostream>
using namespace std;

signed int a, b, t;

int main(){

	//freopen("entrada.in", "r", stdin);            //Enviamos todo el contenido de un txt para el "cin"
	cin >> t;                                       //Recibimos la cantidad de casos de prueba

	while(t){                                       //Mientras queden casos de prueba
		cin >> a >> b;                              //Recibimos los dos numeros
		if (a > b){                                 //Si el primer numero es mayor al segundo
			cout << ">" << endl;                    //Escribimos ">" como salida
		}
		else if (a == b){                           //Si son iguales escribimos "="
			cout << "=" << endl;
		}
		else{                                       //Si no se cumple ninguna (significa que es menor)
			cout << "<" << endl;                    //Escribimos "<" en la salida
		}
		t--;                                        //Restamos 1 a la cantidad de casos de prueba
	}
	return 0;
}
