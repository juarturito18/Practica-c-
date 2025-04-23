#include <iostream>
#include <map>
using namespace std;
int main (){
    int n,i, upper[1000], lower[1000], u, p, countupper(0), t;
    int countlower(0), count(0), pupper[1000], x(0), plower[1000], y (0);
    
    cin >> n;
    t = n;
    for(i = 0; i < n ; i++){

        cin >> u >> p;

        upper[i] = u;
        if (u % 2 != 0){
        countupper ++;
        pupper[x] = i;
        x++;
        }

        lower[i] = p;
        if (p % 2 != 0){
        countlower ++;
        plower[y] = i;
        y++;
        }
        if (u == p){
            t --;
        }
    }

    if (countupper % 2 == 0 && countlower % 2 == 0){
        cout << count;
    } else if ((countupper % 2 == 0 && countlower% 2 != 0) || 
    ( countupper % 2 != 0 && countlower% 2 == 0) ||t < 2){
        cout << -1;
    } else {
        for (i = 0; i < n; i ++){
            if (pupper[i] != plower[i]){
                count++;
                break;
            }
        }
        cout << count;
    }
}