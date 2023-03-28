#include <iostream>
using namespace std;

int main() {
    int N;
    cout << "Inserisci N: ";
    cin >> N;
    char v1[N];

    cout << "Inserisci i caratteri: ";
    for (int i = 0; i < N; i++) {
        cin >> v1[i];
    }
    char v2[N];
    int v2_size = 0;
    for (int i = 0; i < N; i++) {
        bool found = false;
        for (int j = 0; j < v2_size; j++) {
            if (v1[i] == v2[j]) {
                found = true;
                break;
            }
        }
        if (!found) {
            v2[v2_size] = v1[i];
            v2_size++;
        }
    }
    int freq[v2_size];
    for (int i = 0; i < v2_size; i++) {
        freq[i] = 0;
        for (int j = 0; j < N; j++) {
            if (v2[i] == v1[j]) {
                freq[i]++;
            }
        }
    }
    cout << "Vettore 1: ";
    for (int i = 0; i < N; i++) {
        cout << v1[i] << " ";
    }
    cout << endl;
    cout << "Vettore 2: ";
    for (int i = 0; i < v2_size; i++) {
        cout << v2[i] << " ";
    }
    cout << endl;
    cout << "Frequenze: ";
    for (int i = 0; i < v2_size; i++) {
        cout << v2[i] << ": " << freq[i] << " ";
    }
    cout << endl;
    return 0;
}
