# include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    } else{
        return n * factorial(n-1);
    }
}

int main(){
    int numberatoms, changes, sumadelante = 0, sumatras = 0;

    cin >>numberatoms >> changes;
    // se calcula la cantidad de casos por cada cambio
    int movimientos = factorial(numberatoms) / (factorial(changes)*(numberatoms-changes));

    vector<int>energyex(numberatoms);
    vector<int>renergy(numberatoms);

    int minrenergy = INT_MAX;
    //iniciamos un valor minimo para poder ir comparando los resultados y tomas el de  mayor valor, lo mismo con el minimo
    int maxvalue = INT_MIN;
    int posicion;

    // se pide la energia de exitación de cada atomo
    for (int i = 0; i < numberatoms; i++){
        cin >>energyex[i]; 
    }
    // se pide la energia requeria de exitación
    for (int i = 0; i < numberatoms; i++){
        cin >>renergy[i]; 
        if (i != numberatoms - 1){
            if (minrenergy <= renergy[i]){
            minrenergy = renergy[i];
            posicion = i;
            }
        }
    }
     for (int x = 0; x < movimientos; x++){
        int sumaparcial = 0;
        for (int i = 1; i <= numberatoms; i++){
            if (x == i) continue;
            swap(energyex[x],energyex[i]);
            for (int t = 0; t < numberatoms; t++){
                sumaparcial += energyex[t];
            }
            sumaparcial -= renergy[x];
            maxvalue = max(maxvalue, sumaparcial);
            swap(energyex[x],energyex[i]);
        }        
     }
     cout << maxvalue; 
}