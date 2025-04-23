#include <iostream>
using namespace std;
int main (){
    int n, t, x, y;
    string c;
    cin >> n;
    cin >> t;
    cin >> c;
    for(y =0; y < t; y++){
        for (x =1; x< n; x++){
        if (c[x-1] == 'B' && c[x] == 'G'){
        swap (c[x-1], c[x]);
        x++;
            } 
        } 
    }
    cout << c;
}