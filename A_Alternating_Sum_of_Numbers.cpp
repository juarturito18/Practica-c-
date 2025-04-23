#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, i , x = 0;
        cin >> n;
        vector <int> numbers(n);
        for (i = 0; i < n; i ++){
            cin >> numbers[i];
        }
        for (i = 0; i < n; i= i +2){
            x += numbers[i];
        }
        for (i = 1; i < n; i= i +2){
            x -= numbers[i];
        }
        cout << x;
    }
}