#include <iostream>

using namespace std;

void input_numero(float& num) {
    do{
    	cout << "Inserisci un numero positivo: ";
    	cin >> num;
	}while(num > 0);
	
}

void sconto_euro(float p_ven, float sc_perc, float& sc_euro) {
    sc_euro = p_ven * (sc_perc / 100);
    cout << "Lo sconto in euro e' di: " << sc_euro << endl;
}

void prezzo_scontato(float p_ven, float sc_euro, float& pr_scont) {
    pr_scont = p_ven - sc_euro;
    cout << "Il prezzo scontato e' di: " << pr_scont << endl;
}

void sconto_complessivo(float sc_euro, int num_prod, float& sc_totale) {
    sc_totale = sc_euro * num_prod;
    cout << "Lo sconto complessivo e' di: " << sc_totale << endl;
}

void prezzo_complessivo_scontato(float p_ven, float sc_totale, int num_prod, float& pr_totale_scont) {
    pr_totale_scont = (p_ven - (sc_totale / num_prod)) * num_prod;
    cout << "Il prezzo complessivo scontato e' di: " << pr_totale_scont << endl;
}

int main() {
    float p_ven, sc_perc, sc_euro, pr_scont, sc_totale, pr_totale_scont;
    int num_prod;

    input_numero(p_ven);
    cout << "Inserisci lo sconto percentuale: ";
    cin >> sc_perc;
    cout << "Inserisci il numero di prodotti venduti: ";
    cin >> num_prod;

    sconto_euro(p_ven, sc_perc, sc_euro);
    prezzo_scontato(p_ven, sc_euro, pr_scont);
    sconto_complessivo(sc_euro, num_prod, sc_totale);
    prezzo_complessivo_scontato(p_ven, sc_totale, num_prod, pr_totale_scont);

    return 0;
}
