#include <iostream>

using namespace std;

int main(){
    //los operadores de bits son el and que se escribe con & y sirve para juntar los bits individuales
    // de cada numero y en caso de ser iguales poner un 1 y y si son diferentes ponen un 0
    // 2**7   2**6  2**5  2**4  2**3  2**2 2**1  2**0
    //  128    64    32    16     8     4    2    1
    //   0      0     0    0      1     1    0    0 = 12 este numero vale diez porque al sumar los valores en donde vale 1 es decir 8 y 2 se obtien el 10
    //   0      0     0    1      0     1    0    1 = 21
    //   si usamos en and(&) con esto numeros deberias ser
    //   0      0     0    0      0     1    0    0 = 4
    // si fuera con un or(|) en este caso seria
    //   0      0     0    1      1     1    0    1 = 29
    // si usamos el xor (^) con esto los bits iguales son 0 y los diferenes son 1, ejemplo con los dos numeros seria
    //   0      0     0    1      1     0    0    1 = 25 
    // si usaramos un desplazamiento a la izquiera (<<) con el primer numero seria y un solo desplazamiento y ademas se debe indicar la cantidad de casillas que debe moverse el bits, esto quedaria como (x << 1)
    //   0      0     0    1      1     0    0    0 = 24 esto hace que el numero se duplique en 2 
    // si usaramos un desplazamiento a la derecha (>>) con el primer numero seria y un solo desplazamiento y ademas se debe indicar la cantidad de casillas que debe moverse el bits, esto quedaria como (x >> 1)
    //   0      0     0    0      0     1    1    0 = 6 esto hace que el numero se reduzca en dos en 2 
    // importante que a la hora de imprimir en pantalla escribir las operaciones entre parentesis para no tener problemas
    // si usaramos la negación (~) con el primer numero seria
    //   1      1     1     1      0     0     1    1 = -13 en caso de negación no se suma de igual forma porque lo que se hace es revertir todo
    //   0      0     0     0      1     1     0    0  y se le suma un uno
    //                                              1
    //   0      0     0     0      1     1     0    1  = -13 y como en la negación cuando el primer bit es decir el que esta en 128 es 1 el resultado es negativo
    // si en la suma del 1 ya hubiera un 1 en esa posicion lo que se ace es que se pasa es que se deja esa posicion en 0 y se pasa el 1 al bit de atras
    //   0      0     0     0      1     1     0    1  ejemplo
    //                                              1
    //   0      0     0     0      1     1     1    0  = 14
    int number1, number2;
    cin >> number1 >> number2;
    cout << (number1 & number2);
    cout << (number1 | number2);
    cout << (number1 ^ number2);
    cout << (number1 << 1);
    cout << (number1 >> 1);
    cout << (~number1);
}
