#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int nsold, t, k, p, s;
    cin >> nsold;
    if (nsold % 2 != 0){
        for (t = 1; t < nsold/2; t++){
            if (nsold - pow(2,t) < 0){
                k = t-1;
                break;
            }
        }
        p = nsold - pow(2,k) ;
        s = 2*p + 1;
    } else {
        s = 1;
    }
    cout << s;
}