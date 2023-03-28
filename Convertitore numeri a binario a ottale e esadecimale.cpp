#include <iostream>

using namespace std;

int main()
{
    int decimale, resto, indice = 0;
    string binario = "", ottale = "", esadecimale = "";
    
    cout << "Inserisci un numero decimale: ";
    cin >> decimale;

    // Conversione in binario
    while (decimale > 0) {
        resto = decimale % 2;
        decimale /= 2;
        binario = to_string(resto) + binario;
    }

    // Conversione in ottale
    decimale = indice = 0;
    while (binario[indice] != '\0') {
        decimale = decimale * 2 + (binario[indice] - '0');
        indice++;
        if (indice % 3 == 0) {
            ottale = to_string(decimale) + ottale;
            decimale = 0;
        }
    }
    if (indice % 3 != 0) {
        ottale = to_string(decimale) + ottale;
    }

    // Conversione in esadecimale
    decimale = indice = 0;
    while (binario[indice] != '\0') {
        decimale = decimale * 2 + (binario[indice] - '0');
        indice++;
        if (indice % 4 == 0) {
            if (decimale < 10) {
                esadecimale = to_string(decimale) + esadecimale;
            }
            else {
                esadecimale = (char)(decimale - 10 + 'A') + esadecimale;
            }
            decimale = 0;
        }
    }
    if (indice % 4 != 0) {
        if (decimale < 10) {
            esadecimale = to_string(decimale) + esadecimale;
        }
        else {
            esadecimale = (char)(decimale - 10 + 'A') + esadecimale;
        }
    }

    // Output dei risultati
    cout << "Il numero binario corrispondente e': " << binario << endl;
    cout << "Il numero ottale corrispondente e': " << ottale << endl;
    cout << "Il numero esadecimale corrispondente e': " << esadecimale << endl;

    return 0;
}
