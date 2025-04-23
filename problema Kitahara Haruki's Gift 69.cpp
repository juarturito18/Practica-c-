#include <iostream>
#include <map>
using namespace std;
int main (){
    int n, i, peso[1000], count100(0), count200;
    cin >> n;
    for (i = 0; i < n; i++){
        cin >> peso [i];
        if (peso[i] == 100){
            count100++;
        }
    }
    count200 = n - count100;
    bool comprobacion100 = (count100 % 2 == 0);

    if (count200 % 2 == 0 && comprobacion100){
        cout << "YES";
    } else if (count200 % 2 !=0 && comprobacion100 && count100 > 0){
        cout << "YES";
    }else {
        cout << "NO";
    }
}