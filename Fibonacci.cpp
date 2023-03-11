#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int a{ 0 };
	int b{ 1 };
	int c; 
	int e; 

	cout << "Fibonacci serisinin ilk kaç terimini istiyorsunuz? ";
	cin >> e;
	if (e == 1) {
		cout << a << endl;
	}
	else if (e <= 0) {
		cout << "Lütfen bir doğal sayı giriniz!!!";
	}
	else {
		cout << a << endl << b << endl;
		for (int i = 1; i <= e - 2; i++) {
			c = a + b;
			a = b;
			b = c;
			cout << c << endl;
		}
	}
}
