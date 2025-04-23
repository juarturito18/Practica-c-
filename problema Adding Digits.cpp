#include <bits/stdc++.h>

using namespace std;

int main(){
    int a, b, n;
    cin >> a >> b >> n;
    
    bool ans = false;
    string result = to_string(a);
    string newa;

        for (int i = 0; i < 10; i ++){
            newa = result + to_string(i);
            // el stoll es una funcion que cambia de forma momentania del tipo string al tipo long long int una variable
            if (stoll(newa) % b == 0){
                result = newa;  
                ans = true;
                break;  
            }
        }
    if (ans){
        cout << result;
        for(int i = 0; i < n-1; i++){
            cout << 0;
        }
    } else {
        cout << -1;
    }
}