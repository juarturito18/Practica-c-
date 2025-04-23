#include <iostream>
using namespace std;
int main(){
    int x;
    string codigo;
    cin >> codigo;
    for (x=1; x<= codigo.size(); x++){
        if (codigo[x-1] == '.'){
            cout << 0;   
        } else if(codigo [x-1] == '-'){
        if (codigo [x] == '-'){
            cout << 2;
            x +=1;
        }else if(codigo [x] == '.'){
            cout  << 1;
            x+=1;
            }
        } 
    }
}