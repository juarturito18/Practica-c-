#include <bits/stdc++.h>

using namespace std;

int main (){
   int t, toys[5];
   cin >> t;
   while(t--){

    int numneg = 0, count = 0;
    bool positive = false;
    bool a = false, b = false, c = false, d = false;

    for (int i = 0; i < 4; i++){
        cin >> toys[i];
        if (toys[i] != 0){
            count++; 
            switch (i){
                    case 0:
                        a = true;
                        break;
                    case 1:
                        b = true;
                        break;
                    case 2:
                        c = true;
                        break;
                    case 3:
                        d = true;
                        break;
                }       
        }
    }
    numneg = toys[0] + toys[1];
    if (numneg % 2 == 0){
        positive = true;
    }
    switch (count){
        case 1:
            if (positive){
                 if (a){
                    a = false;
                    d = true; 
                 } else if (b){
                    b = false;
                    c = true;
                }
            }
            break;
        case 2:
            if (positive){
                if ((a || d) && (b || c)){
                    c = true;
                    d = true;
                    a = false;
                    b = false;
                } else if (c && b){
                    d = false;
                    c = true;
                    a = false;
                    b = false;
                } else{
                    d = true;
                    c = false;
                    a = false;
                    b = false;
                }
            } else{
                if ((a || d) && (b || c)){
                    c = false;
                    d = false;
                    a = true;
                    b = true;
                } else if (c && b){
                    d = false;
                    c = false;
                    a = false;
                    b = true;
                } else{
                    d = false;
                    c = false;
                    a = true;
                    b = false;
                }
            }
            break;

        case 3:
        case 4:
            if (positive){
                c = true;
                d = true;
                a = false;
                b = false;
            } else{
                c = false;
                d = false;
                a = true;
                b = true;
            }
            break; 
    }  
    
    if (a) cout << "Ya" << " "; else cout << "Tidak" << " "; 
    if (b) cout << "Ya" << " "; else cout << "Tidak" << " "; 
    if (c) cout << "Ya" << " "; else cout << "Tidak" << " "; 
    if (d) cout << "Ya" << " "; else cout << "Tidak" << " ";
    cout << endl;
   }
}