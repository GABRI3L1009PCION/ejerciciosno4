#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
    string frutas[9]={"fresa", "sandia", "melon", "fresa", "naranja", "melon", "mango", "naranja", "fresa"};

    map<string, int> frutas_contador; // map para almacenar el contador de frutas

    // contar el número de veces que aparece cada fruta
    for (int i = 0; i < 9; i++) {
        frutas_contador[frutas[i]]++;
    }

    // mostrar los resultados
    for (auto const& [fruta, contador] : frutas_contador) {
        cout << "La fruta " << fruta << " aparece " << contador << " veces." << endl;
    }

    return 0;
}
