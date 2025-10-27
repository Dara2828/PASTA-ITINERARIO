#include <iostream>
using namespace std;

int main() {
    int vet[10], soma = 0;
    for (int i = 0; i < 10; i++) {
        cout << "Digite o " << i + 1 << "º número: ";
        cin >> vet[i];
        soma += vet[i];
    }
    cout << "Soma dos elementos = " << soma << endl;
    return 0;
}
