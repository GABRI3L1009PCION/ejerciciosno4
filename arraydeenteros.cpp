#include <iostream>
using namespace std;

int main() {
    int array[10];
    int sum = 0;

    cout << "Ingrese los valores del array:" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Elemento " << i << ": ";
        cin >> array[i];
        sum += array[i];
    }

    cout << "La suma de los elementos del array es: " << sum << endl;

    return 0;
}
