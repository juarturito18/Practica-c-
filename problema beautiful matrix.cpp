#include <iostream>
using namespace std;
int main(){
    int  movimientos, a, b, filas, columnas, valorbuscado;
    int matriz[5][5];
    for (int c=0; c < 5; c++){
        for (int d= 0 ; d < 5 ; d++){
            cin >> matriz [c][d];
        }
    }
    for (int i=0;i<5;i++){
        for (int j=0; j<5;j++){
            cout<<matriz[i][j]<<"";
        }
        cout<<endl;
    }
    for (int filas =0; filas <5;  filas++);{
        for (int columnas = 0; columnas < 5 ; columnas ++){
            if (matriz [filas][columnas] == 1){
                a = abs(filas - 2);
                b = abs(columnas - 2);
                }
            } 
        }
         movimientos = a + b;
         cout << movimientos;
}
