#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Digite o número de termos da sequência: ";
    cin >> n;

    int a = 0, b = 1, c;
    cout << "Sequência de Fibonacci: ";
    for (int i = 0; i < n; i++) {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    cout << endl;
    return 0;
}
