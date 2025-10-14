#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float largura, comprimento, precoMetro, area, precoTotal;

    cin >> largura >> comprimento >> precoMetro;

    area = largura * comprimento;
    precoTotal = area * precoMetro;

    cout << fixed << setprecision(2);
    cout << "Area = " << area << " m2" << endl;
    cout << "Preco do terreno = R$ " << precoTotal << endl;

    return 0;
}
