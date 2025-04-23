#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int arrivebrothers;
    int x=0;
    for (int i = 0; i < 2; i++){
        cin >> arrivebrothers;
        x += arrivebrothers;
    }
    switch (x){
        case 3:
            cout << 3;
            break;
        case 4:
            cout << 2;
            break;
        case 5:
            cout << 1;
            break;
    }
}