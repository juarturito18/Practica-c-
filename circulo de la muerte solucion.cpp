#include <iostream>
#include <math.h>
using namespace std;
int main() {
    int nsold, t, k, p, s;
    cin >> nsold;
        for (t = 1; t < nsold; t++){
            if (nsold - pow(2,t) < 0){
                k = t-1;
                break;
            }
        }
        p = nsold - pow(2,k) ;
        s = 2*p + 1;
    cout << s;
}