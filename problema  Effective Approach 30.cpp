#include <iostream>
#include <map>
using namespace std;
int main (){
    int n, m, i, x, y;
    long long countv(0);
    long long countp(0);
    cin >> n;
    map<int, int>z;
    for (i = 0; i < n; i++){
        cin >> x;
        z[x] = i;
    }
    cin >> m;
    for (i = 0; i < m; i++){
        cin >> y;
        countv = countv + z[y] + 1; 
        countp = countp + n - z[y];
    }
    cout << countv << " " << countp;
}