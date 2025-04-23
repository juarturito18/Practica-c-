#include <iostream>
#include <cmath>
using namespace std;
int main(){
        float x, y, z, a1, a2, a3, total;
        cin >> a1 >> a2 >> a3;

        a1 = x * y;
        a2 = x * z;
        a3 = y * z;
        (x*y)*(x*z)*(y*z) = a1 * a2* a3;
        pow(x, 2) * pow (y, 2) * pow (z , 2) = a1 * a2 * a3;
        sqrt( pow(x, 2) + pow (y, 2) + pow (z , 2)) = sqrt (a1 * a2 * a3);

        x = sqrt (a1 * a2 * a3) / a3;
        y = sqrt (a1 * a2 * a3) / a2;
        z = sqrt (a1 * a2 * a3) / a1;
        total = (x*4) + (y*4) + (z*4);
        cout << total << endl;
        /// sqrt se usa para sacar raiz cuadrada
        
}
