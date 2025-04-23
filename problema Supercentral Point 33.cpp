#include <iostream>
using namespace std;
int main(){
    int tamaño, i, t, z(0), point(0);
    int x[1000];
    int y[1000];
    cin >> tamaño;
    for (i = 0; i < tamaño; i++){
        cin >> x[i];
        cin >> y[i];
    }
    while (z < tamaño){
         int conta(0),contb(0), contc(0), contd(0);
       
        for(t=0;t < tamaño ; t++) {
            if (t !=z){
            if (x[z]== x[t] && y[z] < y[t])
            conta++;
         
            if (x[z]== x[t] && y[z] > y[t])
            contb++;
            
            if (x[z]< x[t] && y[z] == y[t])
            contc++;

            if (x[z]> x[t] && y[z] == y[t])
            contd++;
            }
        }
        if (conta > 0 && contb > 0 && contc > 0 && contd >0){
            point ++;
        }
        z++;
    }
    cout << point;
}