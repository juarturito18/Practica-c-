#include <iostream>
using namespace std;
int main (){
    int tamaño, num1, num2, t, x, y;
    cin >> tamaño;
    y=0;
    x=1;
    if (tamaño % 2 == 0) {
    for (t = 0; t < tamaño; t+=2){
        y +=2;
        num1 = y;
        num2 = x;
        x+=2;
        cout << num1 << " " << num2 << " ";
        }
    } else {
        cout <<-1;
    }
} 