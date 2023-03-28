#include <iostream>

using namespace std;

void contaOccorrenze(char vettore[], int lunghezza, char var_car, int& occorrenze) {
    occorrenze = 0;
    for (int i = 0; i < lunghezza; i++) {
        if (vettore[i] == var_car) {
            occorrenze++;
        }
    }
}

int main() {
    char vettore[] = { 'a', 'b', 'c', 'a', 'd', 'e' };
    int lunghezza = sizeof(vettore) / sizeof(vettore[0]);
    char var_car = 'a';
    int occorrenze;
    contaOccorrenze(vettore, lunghezza, var_car, occorrenze);
    cout << "Il carattere " << var_car << " appare " << occorrenze << " volte nel vettore." << endl;
    return 0;
}