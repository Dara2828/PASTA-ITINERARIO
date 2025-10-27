#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite um número inteiro: ";
    cin >> n;

    unsigned long long fatorial = 1;
    for (int i = 1; i <= n; i++) fatorial *= i;

    cout << "Fatorial de " << n << " = " << fatorial << endl;
    return 0;
}
