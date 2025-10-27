#include <iostream>
using namespace std;

int main() {
    int vet[10], inverso[10];
    cout << "Digite 10 números:\n";
    for (int i = 0; i < 10; i++) cin >> vet[i];

    for (int i = 0; i < 10; i++) inverso[i] = vet[9 - i];

    cout << "Vetor invertido:\n";
    for (int i = 0; i < 10; i++) cout << inverso[i] << " ";
    cout << endl;
    return 0;
}
