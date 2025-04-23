#include <iostream>
using namespace std;
int main(){
    int cont, t;
    string num;
    cin >> num;
    cont=0;
    for(t = 0; t < num.size(); t++){
        if (num[0]== '7' or num[0]== '4'){
            cont++;
        }
    }
    if (cont == '4' or cont== '7'){
        cout << "YES";
    } else {
        cout << "NO";
    }
}