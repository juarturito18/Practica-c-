#include <iostream>
#include <string>
#include <map>
using namespace std;
int main (){
    map<char, int> recuento;
    int k, i;
    string s, stringf, stringc;

    cin >> k >> s;

    bool comprobacion = (s.size() % k == 0);

    if (comprobacion){
        for (auto c : s){
            recuento[c]++;
        }
       for (auto& par : recuento) {
        if (par.second % k != 0){
            cout << -1;
            return 0;
                } else{
                    stringc += string(par.second /k, par.first);
                } 
            }
             for (i = 0; i < k; i++){
                        stringf += stringc;
                    }
                    cout << stringf;
        } else {
        cout << -1;
    }
}