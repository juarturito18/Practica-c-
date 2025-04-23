#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, i;
        int mx= INT_MIN;
        int mn = INT_MAX;
        vector<int>a(n);
        for (i = 0; i < n; i++){
            cin >> a[i];
            mx = max(a[i],mx);
            mn = min(a[i],mn);
        }
        cout << (mx & mn) << endl;
    }
}