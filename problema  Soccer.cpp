# include <bits/stdc++.h>

using namespace std;

int main(){
    int n, f1, f2, f3;
    cin >> n;
    vector<int>fx(n);
    int rango1_2, rango2_3, rango1_3, rangox;

    cout << "? 1  2 \n" << flush;

    cin  >> rango1_2;

    cout << "? 2  3 \n" << flush;

    cin  >> rango2_3;

    cout << "? 1  3 \n" << flush;

    cin  >> rango1_3;

    //rango1_2 - f2 = f1, rango2_3 - f2 = f3, f2 =  rango1_2 + rango2_3 - rango1_3
    f2 = rango1_2 + rango2_3 - rango1_3;
    f1 = rango1_2 - f2;
    f3 = rango2_3 - f2;
    fx[4] = f3;

    for (int i = 4; i < n; i++){
        cout << "? " << (i - 1) << (i);
        cin >> rangox;
        fx[i] = rangox - fx[i];
    }
    cout << "! " << f1 << " "<< f2  << " " << f3 << " ";
    for (int i = 4; i <=n; i ++){
        cout << fx[i] << " ";
    }
}
