#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c, ans;
        cin >> a >> b;
        c = (a + b)/ 2;
        ans = (c - a) + ( b -c);
        cout << ans << endl;
    }
}