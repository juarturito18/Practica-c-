# include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k;
    cin >> n >> k;

    vector <int> energy(n);
    vector <int> renergy(n);
    vector <int> sumenergy(n);

    int ans = INT_MAX;
    int minrenergy = INT_MAX;

    for (int i = 0; i < n; i ++){
        cin >> energy[i];
        sumenergy[i] = sumenergy[i] + energy[i];
    }
    for (int i = 0; i < n; i ++){
        cin >> renergy[i];
    }

    if (k == 0){
        int sum= 0;
        for (int i = n- 1; i >= 0; i--){
            sum += energy[i];
            ans = max(ans, sum-renergy[i]);
        }
    } else if (k == 1){

    } else {
        for ( int i = n-1; i >= 0; i--){
            minrenergy = min(minrenergy, renergy[i]);
        }
        ans = sumenergy[n-1]-minrenergy;
        ans = max(ans, energy[n-1], renergy[n-1]);
    }
    cout << ans;
}