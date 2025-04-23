#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
    int n, m, c;
    string wordn, wordm;
    cin >> n >> m;
    set<int>repeat;
    cin >> wordn;
    for(int i = 0; i < m; i++){
        cin >> c;
        repeat.insert(c);
    }
    //transformo un set en un vector
    vector<int> posicion(repeat.begin(), repeat.end());

    cin >> wordm;

    sort(wordm.begin(),wordm.end());
    sort(posicion.begin(),posicion.end());

    for (int i = 0; i < m; i++){
        wordn[posicion[i]-1] =  wordm[i];
        }
        cout << wordn << endl;
    }
}