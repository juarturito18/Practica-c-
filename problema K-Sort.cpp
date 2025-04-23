#include<bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        long long int n, ans = 0, u = 0;
        cin >> n;

        vector<int>a(n);
        vector <int>low(n); 

        int mxn = INT_MIN;
        int mx = INT_MIN;

        for(int i = 0; i < n; i++){
            cin >> a[i];
        } 

        for(int i = 1; i < n; i++){
            mx = max(mx, a[i-1]);
            if (mx > a[i]){
                low[u] = mx - a[i];
                u++;
                ans += mx - a[i];
            }
        } 

        if (u > 0){
        for (int y = 0; y < u; y++){
            mxn = max(mxn, low[y]);
            }
        ans += mxn;
        }
        
        cout << ans << endl;
    }
}