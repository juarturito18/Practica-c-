#include <bits/stdc++.h>

using namespace std;

int main(){
    int tamaño, count = 0, x = 0, l = 0, r = 0;
    cin >> tamaño;
    vector<int> array(tamaño);
    vector<int> replica(tamaño);

    for (int i = 0; i < tamaño; i++){
        cin >> array[i];
        replica[i] = array[i];
    }
    sort(replica.begin(), replica.end());

    for ( int i =0; i< tamaño; i++){
        if (replica[i] != array[i]){
            l = i;
            break;
        }
    }
        for (int y = tamaño-1; y >=0; y--){
            if (replica[y]!= array[y]){
                r = y;
                break;
            }
        }
    reverse( array.begin() + l, array.begin()+ r +1);

    if (replica != array){
        cout << "no";
        return 0;
    } 
     if( l == 0 && r == 0){
         cout << "yes" << endl << 1 << " " << 1;
         return 0;
     }

        cout << "yes" << endl;
            cout << l + 1 << " " << r + 1;
}