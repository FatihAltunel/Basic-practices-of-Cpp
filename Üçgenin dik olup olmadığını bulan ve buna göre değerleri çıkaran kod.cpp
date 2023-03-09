#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int a, b, c, a2, b2, c2;
	cout << "Lütfen üçgenin kenarlarını giriniz:"<<endl;
	cin >> a;
	cin >> b;
	cin >> c;

	a2 = pow(a, 2);
	b2 = pow(b, 2);
	c2 = pow(c, 2);

	if (a2 + b2 != c2 && b2 + c2!= a2 && a2 + c2 != b2 ) {
		cout << "Bu bir dik üçgen değildir" << endl;
	}
	if(a2 + b2 == c2 || b2 + c2 == a2 || a2 + c2 == b2) {
		cout << "Bu bir dik üçgendir" << endl;
		cout << "Üçgenin kenarları " <<a<<"," << b<<"," << c << "'dir" << endl;

		if (c > a && c > b ) {
			cout << "Üçgenin Hipotenüsü = " << c << endl;
			cout << "Üçgenin Çevresi = " << a + b + c << endl;
			cout << "Üçgenin Alanı = " << (float)a * b / 2 << endl;
		}

		if (b > a && b > c) {
			cout << "Üçgenin Hipotenüsü = " << b << endl;
			cout << "Üçgenin Çevresi = " << a + b + c << endl;
			cout << "Üçgenin Alanı = " << (float)a * c / 2 << endl;
		}

		if (a > b && a > c) {
			cout << "Üçgenin Hipotenüsü = " << a << endl;
			cout << "Üçgenin Çevresi = " << a + b + c << endl;
			cout << "Üçgenin Alanı = " << (float)b * c / 2 << endl;
		}

	}

	return 0;
}