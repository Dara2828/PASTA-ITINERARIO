#include <iostream>
using namespace std;

int main() {
    int A[5], B[5], C[10];
    cout << "Digite 5 números para o vetor A:\n";
    for (int i = 0; i < 5; i++) cin >> A[i];

    cout << "Digite 5 números para o vetor B:\n";
    for (int i = 0; i < 5; i++) cin >> B[i];

    for (int i = 0; i < 5; i++) {
        C[2*i] = A[i];
        C[2*i + 1] = B[i];
    }

    cout << "Vetor intercalado:\n";
    for (int i = 0; i < 10; i++) cout << C[i] << " ";
    cout << endl;
    return 0;
}
