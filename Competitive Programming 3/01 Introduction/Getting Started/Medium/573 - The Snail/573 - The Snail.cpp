#include <iostream>
#include <cstdio>
using namespace std;

int H, D, F, dia;
float altura, f, U;

int main(){
    //freopen("entrada.in", "r", stdin);

    while(true){
        cin >> H >> U >> D >> F;
        if (H == 0)
            break;
        dia = 1;
        altura = 0;
        f = U*F/100;
        while(true){
            altura += U;
            if (U > 0){
                U -= f;
            }
            if(altura > H){
                cout << "success on day " << dia << endl;
                break;
            }
            altura -= D;
            if(altura < 0){
                cout << "failure on day " << dia << endl;
                break;
            }
            dia++;
        }
    }


    return 0;
}
