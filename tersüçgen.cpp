#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	int deger1, deger2, deger3, deger4;

	cout << "Lütfen ilk üçgenin boyutunu giriniz:";
	cin >>deger1;
	cout << "Lütfen ikinci üçgenin boyutunu giriniz:";
	cin >> deger2;
	cout << "Lütfen üçüncü üçgenin boyutunu giriniz:";
	cin >> deger3;
	cout << "Lütfen dördüncü üçgenin boyutunu giriniz:";
	cin >> deger4;

	deger2++; 
	deger3++;

	cout << endl;

	for (int a = deger1; a >= 1; a--) {
		for (int b = 1; b <= a; b++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	for (int c = 1; c <= deger2; c++) {
		for (int bosluk = 1; bosluk < c; bosluk++) {
			cout << " ";
		}
		for (int yıldız = 1; yıldız < deger2-c+1; yıldız++) {
			cout << "*";
		}
		cout << endl;
	}

	for (int d = 1; d <= deger3; d++) {
		for (int bosluk2 = 1; bosluk2<=deger3-d; bosluk2++) {
			cout << " ";
		}
		for (int yıldız2 = 1; yıldız2 <= d-1 ; yıldız2++) {
			cout << "*";
		}
		cout << endl;
	}

	cout << endl;
	cout << endl;

	for (int e = 1; e <= deger4; e++) {
		for (int yıldız3 = 1; yıldız3 <= e; yıldız3++) {
			cout << "*";
		}
		cout << endl;
	}
}