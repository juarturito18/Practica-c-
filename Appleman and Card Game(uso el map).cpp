#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long long int totalcards, toastcards, i = 0, ans = 0;
    string letterscards;
    
    cin >> totalcards >> toastcards >> letterscards;

    map <char, int>recuento;
    vector<int>cards(totalcards);
    
    for (char x : letterscards){
        recuento[x]++;
    }
    
    for (auto c: recuento){
        if (c.second >= toastcards){
            ans = toastcards * toastcards;
            cout << ans;
            return 0;
        }else{
            cards[i] = c.second;
            i++;
        }
    }
        sort(cards.rbegin(),cards.rend());
        for(long long int count : cards){
            if (toastcards <= count){
                ans+= toastcards *toastcards;
                toastcards -= toastcards;
                cout << ans;
                return 0;
            } else{
            toastcards -= count;
            ans += count * count; 
        }
    }
}