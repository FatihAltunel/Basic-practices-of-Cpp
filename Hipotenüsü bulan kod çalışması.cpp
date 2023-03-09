#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int taban, dik;
	cout << "Üçgenin tabanının uzunluğunu yazınız = ";
	cin >> taban;
	cout << "Üçgenin tabana dik kenarının uzunluğunu yazınız = ";
	cin >> dik;
	cout << "Hipotenüsün uzunluğu = " << sqrt(pow(taban, 2) + pow(dik, 2)) << endl;
	return 0;
}