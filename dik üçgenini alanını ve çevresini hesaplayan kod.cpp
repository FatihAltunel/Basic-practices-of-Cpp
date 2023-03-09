#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");

	float taban, dik;
	
	cout << "Üçgenin tabanının uzunluğunu birim cinsinden yazınız = ";
	cin >> taban;
	cout << "Üçgenin tabana dik kenarının uzunluğunu birim cinsinden yazınız = ";
	cin >> dik;

	float hipotenus = sqrt(pow(taban, 2) + pow(dik, 2));
	float alan = (float)taban * dik / 2;
	cout << "Üçgenin hipotenüsünün uzunluğu = " << hipotenus << endl;
	cout << "Üçgenin çevresi = " << taban + dik + hipotenus <<" birimdir "<< endl;
	cout << "Üçgenin alanı = " << alan <<" birim karedir "<< endl;
	return 0;
}