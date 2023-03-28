#include <iostream>
using namespace std;

const int LUNGHEZZA = 3;

void sommaVettori(double vettoreA[], double vettoreB[], double vettoreC[]) {
    for (int i = 0; i < LUNGHEZZA; i++) {
        vettoreC[i] = vettoreA[i] + vettoreB[i];
    }
}

int main() {
    double vettoreA[LUNGHEZZA];
    double vettoreB[LUNGHEZZA];
    double vettoreC[LUNGHEZZA];

    cout << "Inserisci i valori del vettore A: ";
    for (int i = 0; i < LUNGHEZZA; i++) {
        cin >> vettoreA[i];
    }

    cout << "Inserisci i valori del vettore B: ";
    for (int i = 0; i < LUNGHEZZA; i++) {
        cin >> vettoreB[i];
    }

    sommaVettori(vettoreA, vettoreB, vettoreC);

    cout << "Il vettore C contiene: ";
    for (int i = 0; i < LUNGHEZZA; i++) {
        cout << vettoreC[i] << " ";
    }
    cout << endl;
    return 0;
}