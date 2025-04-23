#include <iostream>
#include <vector>
using namespace std;
int main (){
    int a, b, c, n, q, u, y, sizej, sizei, sizek, z, x(0), countn(0);
    cin >> a >> b >> c; 
    vector <int>j;
    vector <int>i;
    vector <int>k;
    int divisores (int h, vector<int>o){
        vector<int>v;
        for (q = 1; q <= h; q++){
        if (h % (q) == 0){
           o = v.push_back(q);
            }
        }
    }
    j.push_back (divisores (a, j));
    i.push_back (divisores (b, i));
    k.push_back (divisores (c, k));

    // for (q = 1; q <= a; q++){
    //     if (a % (q) == 0){
    //         j.push_back(q);
    //     }
    // }
    // for (q = 1; q <= b; q++){
    //     if (b % (q) == 0){
    //         i.push_back(q);
    //     }
    // }
    // for (q = 1; q <= c; q++){
    //     if (c % (q) == 0){
    //         k.push_back( q);
    //     }
    // }
    
    sizej = j.size();
    sizei = i.size();
    sizek = k.size();
    for(u = 0; u <sizej; u++){
        for(q = 0; q < sizei; q++){
            for (y = 0; y <sizek; y++){
                n = j[u] * i[q] * k[y];
                for (z = 0; z < n; z++){
                    if (n % (z+ 1) ==0)
                    countn++;
                }
                x += countn;
                x = (x % 1073741824);
            }
        }
    }
    cout << x;
}