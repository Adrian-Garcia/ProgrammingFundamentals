#include <iostream>

using namespace std;

int main ()
{
int parte_entera;
double parte_decimal, numero;

cout << "Introduce un numero cualquiera: ";
cin >> numero;

parte_entera = numero;
parte_decimal = numero-parte_entera;

cout << "la parte entera es: " << parte_entera << ", y la decimal es: " << parte_decimal;

return 0;
}
