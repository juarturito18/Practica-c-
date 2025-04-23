#include <bits/stdc++.h>

using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
        int row, column;
        cin >> row >> column;
        vector<int>matriz1(row*column);
        vector<int>matrizcopy(row*column);
        bool ans = true;
        for (int i = 0; i < row * column; i++){
                cin >> matriz1[i];
                matrizcopy[i] = matriz1[i];
        }
        for (int i = 0; i < row; i ++){
            for (int j = 0; j < column; j++){
                swap(matriz1[i*column+j], matriz1[i*column+j+1]);
            }
        }
        for (int i = 0; i < row; i ++){
            for (int j = 0; j < column; j++){
                if (matriz1 == matrizcopy){
                    ans = false;
                    break;
                    }
            }
            if (!ans){
                cout << -1 << endl;
                break; 
            }
        }
        if (ans){
        for (int i = 0; i < row; i ++){
            for (int j = 0; j < column; j++){
                cout << matriz1[i* column + j] <<" " ;
                }
                cout << endl;
            }
        }
    }
}