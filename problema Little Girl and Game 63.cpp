#include <iostream>
#include <map>
using namespace std;
int main (){
    string s;
    int i, count(0), counti(0);
    cin >> s;
    
    for (i = 0; i < s.length()/2; i++){
        if (s[i]!= s[s.size() - 1 -i]){
            count++;
        }
    }
    
    if (count == 0){
        cout << "First";
        
    } else{
        
        map <char, int>counts;
        
        for (auto c :  s){
        counts[c]++;
        }
        for (const auto& [ch, cnt] : counts){
            if (cnt % 2 != 0){
                counti++;
            }
        }
        if (counti % 2 != 0 || counti == 0){
            cout << "First";
        } else{
            cout << "Second";
        }
    }
}