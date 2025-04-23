#include <iostream>
#include <map>
using namespace std;
int main (){
    int n, i, x, num25(0), num50(0);
    cin >> n;
    bool can = true;

    for (i = 0; i < n; i++){
        cin >> x;
        switch (x){
        case 25:
            num25++;
            break;
        case 50:
            if (num25 > 0){
                num50++;
                num25--;
            } else {
                can = false;
                break;
            }
            break;
        case 100:
            if (num25 > 0 && num50 > 0){
            num25 --;
            num50 --;
            } else if (num25 > 2){
            num25 -=3;            
            } else {
                can = false;
                break;
            }
            break; 
        }
    }
    if (can) cout << "YES"; else cout << "NO";
}