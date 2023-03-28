#include <iostream>

using namespace std;

float prendi_numero_positivo() {
    float numero;
    do {
        cout << "Inserisci un numero positivo: ";
        cin >> numero;
    } while (numero <= 0);
    return numero;
}

float calcola_superficie(float raggio) {
    return 4 * raggio * raggio * 3.14;
}

float calcola_volume(float raggio) {
    return (4.0 / 3) * raggio * raggio * raggio * 3.14;
}

int main() {
    float raggio = prendi_numero_positivo();
    float superficie = calcola_superficie(raggio);
    float volume = calcola_volume(raggio);
    
    cout << "La superficie della sfera e': " << superficie << endl;
    cout << "Il volume della sfera e': " << volume << endl;
    
    return 0;
}
