#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int lriver, canjump, canswim, dist = 0, i = 0, posicion = 0;
        bool canpass = false;
        string objects;
        cin >> lriver >> canjump >> canswim >> objects;
        for(i = 0; i < lriver; i ++){
            if (canjump >= lriver + 1 - posicion){
                cout << "Yes" << endl;
                i = lriver;
            } else if ( canswim < 0){
                cout << "No" << endl;
                i = lriver;
            }
            if (objects[i] == 'L'){
                dist = i - dist;
                if (canjump >= dist){
                    posicion = i;
                } 
            }
        }   
        for (int f = lriver; f >= 0; f--){
            if (objects[f] == 'W'){
                if (canjump >= f - posicion){
                    canswim--;
                    posicion = f;
                }
            }
        } if (!canpass){
            cout <<"No" << endl;
            i = lriver;
        }
    }
}