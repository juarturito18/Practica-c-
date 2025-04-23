#include <iostream>
#include <vector>

using namespace std;

int main (){
    int t;
    cin >> t;
    while(t--){
    int n, m, k;
    cin >> n >> m >> k;
    for (int i = n; i >= k; i--){
        cout << i << " ";
        }
    for (int i = m + 1; i < k; i++){
        cout << i << " ";
    }
    for(int i = m; i >0; i--){
        cout << i << " ";
        }
        cout << endl;
    }
}
   