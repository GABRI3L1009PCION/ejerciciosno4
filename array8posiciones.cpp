#include <iostream>
using namespace std;

int main() {
    int array[8];

    cout << "Ingrese los valores del array:" << endl;

    for (int i = 0; i < 8; i++) {
        cout << "Elemento " << i << ": ";
        cin >> array[i];
    }

    cout << "El array original es: ";
    for (int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    int temp;
    for (int i = 0; i < 4; i++) {
        temp = array[i];
        array[i] = array[7 - i];
        array[7 - i] = temp;
    }

    cout << "El array invertido es: ";
    for (int i = 0; i < 8; i++) {
        cout << array[i] << " ";
    }
    cout << endl;

    return 0;
}

