#include <iostream>
#include <math.h>
using namespace std;
int main (){
    int n, a, b, total(0), c;
    cin >> n;
    for (b = 1; b <= n; b++){
        for (a = 1; a <= b ; a++){
           c = sqrt(pow(a,2) + pow(b,2));
            if (c <= n && c*c == pow(a,2) + pow(b,2)){
                total++;
            }
        }
    }
    cout << total;
}