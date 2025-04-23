#include <iostream>
using namespace std;
int main() {
    int pages, lunes, martes, miercoles, jueves, viernes, sabado, domingo, dia;
    cin >> pages;
    
    cin >> lunes >> martes >> miercoles >> jueves >> viernes >> sabado >> domingo;
    dia = 0;
    while (pages > 0 ){
            pages -= lunes;
            dia +=1;
             if (pages > 0 ){
            pages -= martes;
            dia +=1;
              if (pages > 0 ){
            pages -= miercoles;
            dia +=1;
             if (pages > 0 ){
            pages -= jueves;
            dia +=1;
             if (pages > 0 ){
            pages -= viernes;
            dia +=1;
             if (pages > 0 ){
            pages -= sabado;
            dia +=1;
             if (pages > 0 ){
            pages -=domingo;
            dia +=1;
            if (pages > 0){
            dia -= 7;
                                }
                            }
                        }   
                    }
                }
            }
        }
    }
     cout << dia;
}

