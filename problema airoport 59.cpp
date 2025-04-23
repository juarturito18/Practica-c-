#include <iostream>
#include <algorithm>
using namespace std;
int main (){
    int n, m, s, i, f[1000], d[1000], max(0), min(0);
    cin >> n >> m;
    s = n;
    for (i = 0; i < m; i++){
        cin >> f[i];
    }
    for (i = 0; i < m; i ++){
        d[i] = f[i];
    }
    sort(f, f + m);
    i = 0;
    while (f[i] > 0 && i <=m){
        min += f[i];
        f[i]--;
        n--;
        if (f[i] == 0)
        i++;
        if (n == 0)
        break;
    }
    for (i = 0; i < s; i++){
            sort (d , d + m);
            reverse (d, d + m);
            max += d[0];
            d[0]--;
    }
    cout << max << " " << min; 
}