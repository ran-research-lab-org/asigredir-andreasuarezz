// Andrea Suarez (andreasuarezz)
// Programa que calcule el promedio de 10 enteros

#include <iostream>
#include <format>
using namespace std;

int main() {
    int n;
    int sum = 0;

    cout << "Entra 10 enteros: ";

    for (int i = 0; i < 10; i++) {
        cin >> n;
        sum += n;
    }

    cout << format("Promedio de los 10 enteros: {:.2f}\n", sum / 10.0);
    return 0;
}
