#include <iostream>
//libreria usada para crear archivos y escribir sobre el
#include <fstream>

using namespace std;

int main(){
    // aqui se crea un archivo y se le agrega el nombre y el tipo del archivo
    ofstream myfyle("prueba c++.txt");
    //se comprueba si el archivo esta abierto para poder modificarlo
    if (myfyle.is_open()){
        //esta es la forma en la que se imprimen los datos en el mismo archivo en ves de la consola
        myfyle << "hello, how are you ?";
        for (int i = 0; i < 5; i++){
            myfyle << i;
        }
    }
    // luego de haber realizado todos los cambios al archivo se cierra por medio de esta funcion 
    myfyle.close();
}