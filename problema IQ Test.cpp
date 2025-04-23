#include <bits/stdc++.h>

using namespace std;

int main(){
    string square,a ,b ,c ,d;
    bool ans = false;
    int countw = 0, countb = 0;
    vector<vector<string>> matriz(4,vector<string>(4));
    for (int j = 0; j < 4; j++){
    cin >> square;
        for (int i = 0; i < 4; i ++){
            matriz[i][j] = square[i];
        }
    }

    for(int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            countb = 0;
            countw = 0;
            for (int y = 0; y < 2; y ++){
                for (int x = 0; x < 2; x ++){
                    if(matriz [i+ y][j+x] == "#"){
                        countb++;
                    }else {
                        countw++;
                    }
                }
            }         
            if (countb >= 3 || countw >= 3){ 
                ans = true;
                break;
            } 
        }
        if (ans) break;
    }
    if (ans) cout << "YES"; else cout << "NO"; 
}