# include <bits/stdc++.h>

using namespace std;

int factorial(int n){
    if (n == 0){
        return 1;
    } else{
        return n * factorial(n-1);
    }
}

int main(){
    int snakes, clones, radior;
    
    cin >> snakes >> clones >> radior;

    vector <int>x (snakes);
    vector <int>y (snakes);
    vector <int>valores(snakes);

    //vector<vector<int>> posiciones(2, vector<int>(2));

    int movimietos = factorial(snakes) / (factorial(clones)*(snakes-clones));

     for (int i = 0; i < snakes; i++){
        cin >> x[i] >> y[i] >> valores[i];
     }

}