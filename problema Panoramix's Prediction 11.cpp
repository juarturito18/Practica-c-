#include <iostream>
using namespace std;
int main(){
    int n,m,contn,contp, i;
    cin >> n >> m;
    contn=0;
    contp=0;
    for( i= 2; i <=m/2; i++){
        if (!(m%i)){
           contn++;
        } 
    } if (contn == 0 && n == m-1){
        cout <<"YES";
    } else{
    n = n + 1; 
    while (contp == 0){
        contp++;
    for (i=2; i <= n/2;i++){
         if (!(n%i)){
           contp = 0;
           break;
            }
        }
        n++;
        if (n == m){
            break;
        }
    }
    if (contn == 0 && contp ==0){
        cout << "YES";
    }else {
        cout << "NO";
        }
    }
}   