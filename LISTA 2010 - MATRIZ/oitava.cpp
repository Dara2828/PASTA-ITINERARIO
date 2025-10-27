#include <iostream>
using namespace std;

int main() {
    int matriz[4][4], num, cont = 0;
    cout << "Digite os 16 elementos da matriz 4x4:\n";
    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            cin >> matriz[i][j];

    cout << "Digite o número a procurar: ";
    cin >> num;

    for (int i = 0; i < 4; i++)
        for (int j = 0; j < 4; j++)
            if (matriz[i][j] == num)
                cont++;

    cout << "O número " << num << " aparece " << cont << " vezes." << endl;
    return 0;
}
