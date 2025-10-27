#include <iostream>
using namespace std;

int main() {
    int vet[10], num;
    cout << "Digite 10 números:\n";
    for (int i = 0; i < 10; i++) cin >> vet[i];

    cout << "Digite o número a buscar: ";
    cin >> num;

    bool encontrado = false;
    for (int i = 0; i < 10; i++) {
        if (vet[i] == num) {
            encontrado = true;
            break;
        }
    }
    if (encontrado) cout << "Número encontrado no vetor.\n";
    else cout << "Número não encontrado.\n";
    return 0;
}
