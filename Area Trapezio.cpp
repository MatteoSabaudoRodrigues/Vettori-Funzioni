#include <iostream>

using namespace std;

// Funzione che prende un numero in input e lo restituisce
int getInput() {
    float num;
    cout << "Inserire in ordine: Base maggiore, Base minore e Altezza!"
    cout << "Inserisci un numero positivo: ";
    cin >> num;
    return num;
}

// Funzione che calcola l'area del trapezio
double area_trapezio(double b_magg, double b_min, double h) {
    return (b_magg + b_min) * h / 2;
}

int main() {
    // Input delle dimensioni del trapezio
    double base_magg = getInput();
    double base_min = getInput();
    double altezza = getInput();

    // Calcolo e output dell'area del trapezio
    double area = area_trapezio(base_magg, base_min, altezza);
    cout << "L'area del trapezio e': "<< area << endl;

    return 0;
}


// La funzione getInput prende in input un numero positivo e lo restituisce al chiamante.
// Nel main, viene chiamata tre volte per ottenere la base maggiore, la base minore e l'altezza del trapezio. 
//Questi valori vengono poi passati come parametri per valore alla funzione area_trapezio, che calcola e restituisce l'area del trapezio.Infine, l'area viene stampata a schermo dal main.
