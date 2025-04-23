#include <iostream>
using namespace std;
int main (){
    int  x, y;
    int matriz1[3][3];
    int matriz2[3][3];
    for (x = 0; x < 3 ; x++){
        for (y = 0; y < 3; y++){
            cin >> matriz1[x][y];
            matriz2[x][y] = 1;
        }
    }
    for (x = 0; x < 3 ; x++){
        for (y = 0; y < 3; y++){
            while (matriz1[x][y] > 0){ 
                if (y > 0){
                    matriz2 [x][y-1] = abs(matriz2 [x][y-1] - 1);
                }
                if (y < 2){
                matriz2 [x][y+1] = abs(matriz2 [x][y+1] - 1);
                }
                if (x > 0){
                matriz2 [x-1][y] = abs(matriz2 [x-1][y] - 1);
                }
                if (x < 2){
                matriz2 [x+1][y] = abs(matriz2 [x+1][y] - 1);
                }
                matriz2 [x][y] = abs(matriz2[x][y] - 1);
                matriz1[x][y] --;
            }
        }
    }
    for (x = 0; x < 3 ; x++){
        for (y = 0; y < 3; y++){
            cout << matriz2[x][y];
        }
    cout << endl;
    }
}