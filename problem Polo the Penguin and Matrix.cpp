#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

using namespace std;

int main(){
    int n, m, d, i, j, dist, count = 0;
    
    cin >> n >> m >> d;
    vector<int>numbers(n*m);

    for (i = 0; i < n; i ++){
        for (j = 0; j < m; j++){
            cin >> numbers[i* m + j];
        }
    } 
    for (i = 0; i < (n*m) - 1; i++){
        dist = abs(numbers[i] - numbers[i+1]);
        if (dist % d != 0){
            cout << -1;
            return 0;
        }
    }
    sort(numbers.begin(), numbers.end());
    
        for (i = 0; i < n*m; i++){
            count += abs(numbers[i] - numbers[n*m/2])/d;
        }
        cout << count;
}