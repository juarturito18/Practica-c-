#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int numberbottles, canopen(0);
    cin >> numberbottles;
 
    vector <int> marca1(numberbottles);
    vector <int> marca2(numberbottles);
    
    for (int i = 0; i < numberbottles; i++){
        cin >> marca1[i] >> marca2[i];
    }
    for (int i = 0; i < numberbottles; i++){
        for (int j = 0; j < numberbottles; j++){
            if (i == j) continue; 
            if (marca1[i] == marca2[j]){
                canopen++;
                break;
            }
        }
    }
    cout << numberbottles - canopen;
}