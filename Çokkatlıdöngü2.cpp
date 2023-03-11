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
	int a{ 15 };
	int b{ 5 };
	int c{ 100 };
	int d{ 2 };
	while (a < 100) {
		cout << a << "\t" << b << "\t" << c << "\t" << d << endl;
		a += 15;
		b += 5;
		c -= 10;
		d *= 2;
	}


}

