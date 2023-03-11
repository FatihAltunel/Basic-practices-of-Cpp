#include <iostream>
#include <clocale>
#include<math.h>
//1.Kolonda: 1'den 100'e kadar olan 15'in katları
//2.Kolonda: 1'den 30'a kadar olan 5'in katları
//3.Kolonda 100'den 50'ye kadar olan 10'un katları
//4.Kolonda 2'den 64'e kadar olan 2'nin üstleri
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "1.Kolon = ";
	for (int i = 1; i <= 100; i++) {
		if (i % 15 == 0) {
			cout << i << " ";
		}
		if (i == 90) {
			cout << endl;
		}
	}
	cout << "2.Kolon = ";
	for (int a = 1; a <= 30; a++) {
		if (a % 5 == 0) {
			cout << a << " ";
		}
		if (a == 30) {
			cout << endl;
		}
	}
	cout << "3.Kolon = ";
	for (int b = 100; b >= 50; b--) {
		if (b % 10 == 0) {
			cout << b << " ";
		}
		if (b == 50) {
			cout << endl;
		}
	}
	cout << "4.Kolon = ";

	int x{ 1 };
	while (true) {
		int y = pow(2, x);
		if (y > 64) {
			break;
		}
		cout << y << " ";
		x++;
	}
	cout << endl;
	return 0;
}

