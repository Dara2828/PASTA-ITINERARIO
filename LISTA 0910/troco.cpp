#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string produto;
    double preco, dinheiro, troco;
    int quantidade;

    cin >> produto >> preco >> quantidade >> dinheiro;

    troco = dinheiro - (preco * quantidade);

    cout << fixed << setprecision(2);
    cout << "TROCO = " << troco << endl;

    return 0;
}
