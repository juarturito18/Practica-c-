#include <iostream>
using namespace std;
int main(){
    float jugos, fraccion, x, porcentaje, tfraccion, total;
    cin >> jugos;
    for (x = 0; x < jugos; x++){
        cin >> fraccion;
        porcentaje = fraccion/100;
        total += porcentaje;
            cout << porcentaje<< endl;
    }
    cout << total<< endl;
    tfraccion = (total/jugos)*100;
    cout << tfraccion;
}