#include <iostream>
using namespace std;

int main() {
    int vet[20], pares = 0, impares = 0;
    cout << "Digite 20 números inteiros:\n";
    for (int i = 0; i < 20; i++) {
        cin >> vet[i];
        if (vet[i] % 2 == 0) pares++;
        else impares++;
    }
    cout << "Pares: " << pares << "\nÍmpares: " << impares << endl;
    return 0;
}
