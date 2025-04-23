#include <iostream>
using namespace std;
int main (){
    int soldados, t,x ,  minimo(101), maximo(0), pmin(0), pmax(0), movimientos(0);
    cin >> soldados;
    int tamaño [100];
    for (t = 0; t < soldados; t++){
        cin >> tamaño[t];
    }
    for (t = 0;t < soldados; t++){
        if (tamaño[t] <= minimo){
            minimo = tamaño[t];
            pmin = t;
        }
        if ( tamaño [t] > maximo){
            maximo = tamaño[t];
            pmax= t;
        }
    }
        while(pmax > 0){
            if (pmin == pmax-1){
                swap (tamaño[pmin],tamaño[pmax-1]);
                pmin++;
                pmax--;
                movimientos++;
            } else if (pmax > 0){
                swap(tamaño[pmax], tamaño[pmax-1]);
                pmax--;
                movimientos++;
            }
        }
            while(pmin < soldados-1){
            if (pmin < soldados-1){
                swap(tamaño[pmin], tamaño[pmin+1]);
                pmin++;
               movimientos++;
                
        }
    }
    cout << movimientos;
}