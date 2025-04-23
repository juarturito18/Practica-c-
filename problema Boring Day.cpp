# include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n, l, r, count = 0, sum = 0;
        cin >> n >> l >> r;
        vector<int>valor(n);
        for(int i = 0;i < n; i++){
            cin >> valor[i];
        }
        sort(valor.begin(), valor.end());
        for (int i = 0; i < n; i ++){
            if(valor[i] >= l && valor[i] <=r){
                count++;
            } else if (valor[i] <= l){
                i++;
                sum += valor[i] + valor[i-1];
                if (sum >= l && sum <=r){
                    count++;
                } else{
                    i++;
                    sum += valor[i];
                    if (sum >= l && sum <=r){
                    count++;
                    }
                }
            } 
        }
    }
}
