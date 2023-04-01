#include <iostream> //Biblioteca
using namespace std;

int main() {
    int array[10] = { 5, 8, 13, 21, 34, 55, 89, 144, 233, 377 }; //crea un array de 10 elementos
    int sum = 0; //que se utilizará para almacenar la suma de los elementos del array.

    for (int i = 0; i < 10; i++) {
        sum += array[i];
    }

    cout << "La suma de los elementos del array es: " << sum << endl;

    return 0;
}

