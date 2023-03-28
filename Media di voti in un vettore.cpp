#include <iostream>

using namespace std;

const int MAX_VOTI = 10;

void caricaVoti(int voti[], int& QuantitaVoti);
float calcolaMedia(int voti[], int QuantitaVoti);
void VotoPiuAlto(int voti[], int QuantitaVoti, int& votoPiuAlto, int& indiceMaggiore);

int main() {
    int voti[MAX_VOTI];
    int QuantitaVoti;
    caricaVoti(voti, QuantitaVoti);
    cout << "Voti inseriti: ";
    for (int i = 0; i < QuantitaVoti; i++) {
        cout << voti[i] << " ";
    }

    cout << endl;
    float media = calcolaMedia(voti, QuantitaVoti);
    cout << "Media voti: " << media << endl;
    int votoPiuAlto, indiceMaggiore;
    VotoPiuAlto(voti, QuantitaVoti, votoPiuAlto, indiceMaggiore);
    cout << "Il voto piu alto e': " << votoPiuAlto << " (l'indice e': " << indiceMaggiore << ")" << endl;

}

void caricaVoti(int voti[], int& QuantitaVoti) {
    cout << "Inserisci il numero di voti (max: " << MAX_VOTI << "): ";
    cin >> QuantitaVoti;
    cout << "Inserisci " << QuantitaVoti << " voti in seguenza e con un spazio tra di loro: ";
    for (int i = 0; i < QuantitaVoti; i++) {
        cin >> voti[i];
    }
}   

float calcolaMedia(int voti[], int QuantitaVoti) {
    int somma = 0;
    for (int i = 0; i < QuantitaVoti; i++) {
        somma += voti[i];
    }
    return somma / QuantitaVoti;
}

void VotoPiuAlto(int voti[], int QuantitaVoti, int& votoPiuAlto, int& indiceMaggiore) {
    votoPiuAlto = voti[0];
    indiceMaggiore = 0;
    for (int i = 1; i < QuantitaVoti; i++) {
        if (voti[i] > votoPiuAlto) {
            votoPiuAlto = voti[i];
            indiceMaggiore = i;
        }
    }
}
