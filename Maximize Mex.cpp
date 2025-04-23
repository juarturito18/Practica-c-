#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, r = 0, e = 0, y;
        cin >> n >> x;
        vector <int> array; 
        for (int i = 0; i < n; i ++){
            cin >> y;
            if (y < n)array.push_back(y);
        }

        sort(array.begin(), array.end());
        bool condition = true;

        while (condition == true){
            if (array[r] == array[r+1]){
                array[r+1]+= x;
                sort(array.begin(), array.end());
                r += 1;
            } else{
                r +=1; 
            } 
            if (r == array.size()-1) condition = false;
        }
        
        while(condition == false){
            if(e == array[e]){
                e++;
            } else{
                condition = true;
            } 
            if (e == array.size()) condition = true;
        }
        cout << e << endl;
    }
}