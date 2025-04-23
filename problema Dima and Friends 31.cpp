#include <iostream>
using namespace std;
int main(){
    int n, d, i,  total(0), resto(0);
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> d;
        total += d;
    }
    for (i = 1; i <=5; i++){
        if ((total + i) % (n + 1) !=1){
            resto++;
        }
    }
    cout << resto;
}