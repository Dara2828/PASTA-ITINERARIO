#include <iostream>
using namespace std;

int main() {
    double vet[8], soma = 0;
    cout << "Digite 8 números reais:\n";
    for (int i = 0; i < 8; i++) {
        cin >> vet[i];
        soma += vet[i];
    }
    cout << "Média = " << soma / 8 << endl;
    return 0;
}
