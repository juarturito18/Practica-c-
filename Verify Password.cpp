#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        string word, copy;
        cin >> word;
        copy = word;
        sort(copy.begin(),copy.end());
        if (copy == word) cout << "YES"; else cout << "NO";
    }
}