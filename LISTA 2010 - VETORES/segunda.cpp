#include <iostream>
using namespace std;

int main() {
    int vet[15];
    cout << "Digite 15 números inteiros:\n";
    for (int i = 0; i < 15; i++) cin >> vet[i];

    int maior = vet[0], menor = vet[0];
    for (int i = 1; i < 15; i++) {
        if (vet[i] > maior) maior = vet[i];
        if (vet[i] < menor) menor = vet[i];
    }
    cout << "Maior valor: " << maior << "\nMenor valor: " << menor << endl;
    return 0;
}
