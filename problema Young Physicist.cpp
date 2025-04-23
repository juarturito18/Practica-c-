#include <iostream>
using namespace std;
int main(){
    int a, b ,c ,an, bn, cn, n, t;
    cin >> n;
    an=0;
    bn=0;
    cn=0;
    for (t = 0; t < n ; t++){
        cin >> a >> b >> c;
        an += a;
        bn += b;
        cn += c;
    }
    if (an == 0 && bn == 0 && cn == 0){
        cout << "YES";
    } else {
        cout << "NO";
    }
}