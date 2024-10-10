// Andrea Suarez (andreasuarezz)
// Programa que lee 10 enteros y despliega qué porcentaje fueron impares

#include <iostream>
#include <format>
using namespace std;

int main() {
  int n;
  int ctr = 0;
  
  cout << "Entra 10 enteros: ";

  for (int i = 0; i < 10; i++) {
    cin >> n;
    if (n % 2 == 1) ctr++;
  }

  cout << format("Porcentaje de impares: {}%\n", ctr / 10. * 100);
  return 0;
}
