#include <iostream>
#include <string>
using namespace std;
int main (){
    string s, u;
    int e(0);
    cin >> s;
    u = "hello";
    for (int i = 0; i < s.size(); i++){
        if (s[i] == u[e]){
            e++;
        }
        if (e == u.size()){
            break;
        }
    }
    if (e == u.size()){
        cout << "YES";
    } else {
        cout << "NO";
    }
}