# include <iostream>
# include <string>
using namespace std;
int main(){
    int max, min, t;
    string word, s, m;
    cin >> word;
    max= 0;
    min= 0; 
    for (t= 0; t < word.lenght(); t++){
        if (isupper(word[t])){
            max += 1;
        } else {
            min += 1;
        }
    } if (max > min) {
        char ch;
        for (int t; t < word.lenght(); t ++){
            ch = toupper(word[t]);
            cout << ch;
        }
    } else (max <= min){
        char ch;
        for (int t ; t < word.lenght(); t ++){
            ch = tolower(word[t]);
            cout << ch;
        }
    }
}