#include <iostream>
#include <string>
using namespace std;
int main() {
    int year, a, b , c ,d;
    cin >> year; 
    while ((a==b) or (a==c) or (a==d) or (b==c) or (b==d) or (c==d)){
        year +=1;
        a = year / 1000;
        b = (year - a*1000)/100 ;
        c = (year - a*1000 - b*100)/ 10;
        d = (year -  a*1000 - b*100 - c*10);
    }
    cout << year;
}