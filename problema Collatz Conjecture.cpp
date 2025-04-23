# include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int scorebefore1, scorebefore2, scoreafter1, scoreafter2;
        cin >> scorebefore1 >> scorebefore2;
        cin >> scoreafter1 >> scoreafter2;
    
    if ((scorebefore1 < scorebefore2) && scoreafter1 >scoreafter2){
        cout << "NO";
    } else if ((scorebefore1 > scorebefore2) && scoreafter1 < scoreafter2){
        cout << "NO";
    } else {
        cout << "YES";
    }
    }
}
