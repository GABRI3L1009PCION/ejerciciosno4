#include <iostream>
using namespace std;

int main() {
    int array[6];
    int max;

    cout << "Ingrese los valores del array:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << "Elemento " << i << ": ";
        cin >> array[i];
    }

    max = array[0];

    for (int i = 1; i < 6; i++) {
        if (array[i] > max) {
            max = array[i];
        }
    }

    cout << "El numero mayor en el array es: " << max << endl;

    return 0;
}

