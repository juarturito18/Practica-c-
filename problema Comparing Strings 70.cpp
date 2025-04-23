#include <iostream>
#include <math.h>
#include <map>
using namespace std;
int main (){
    string gen1,gen2;
    int count = 0;
    cin >> gen1 >> gen2;
    if (gen1.size() != gen2.size()){
        cout << "NO";
    } else{
        for (int i = 0; i < gen1.size(); i++){
            if (gen1[i] != gen2[i])
             count++;
        }
        map <char, int>genoma1;
        map <char, int>genoma2;
        for (auto c :  gen1){
        genoma1[c]++;
        }
        for (auto c :  gen2){
        genoma2[c]++;
        }
        if (count > 2 or genoma1 != genoma2){
            cout << "NO";
        } else {
            cout << "YES";
        }
    }
}