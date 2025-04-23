# include <iostream>
using namespace std;
int main (){
    int npiedras, t, n; 
    string color;
    cin >> npiedras;
    cin >> color;
    for (t = 1; t < npiedras; t++){
        if (color[t-1] == color[t]){
            n += 1
        }
    }
    cout<< n;
}