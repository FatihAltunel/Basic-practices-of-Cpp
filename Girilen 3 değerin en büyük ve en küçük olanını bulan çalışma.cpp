#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int a, b, c;
	cout << "Lütfen ekrana bir değer giriniz = ";
	cin >> a;
	cout << "Lütfen ekrana ikinci değeri giriniz = ";
	cin >> b;
	cout << "Lütfen ekrana üçüncü değeri giriniz = ";
	cin >> c;
	cout << "Girdiğiniz değerler = " << a << "," << b << "," << c << endl;

	if (a > b && b > c) {
		cout << "En büyük değer = " << a << endl;
		cout << "En küçük değer = " << c << endl;
	}
	else if (a > b && a > c && b < c) {
		cout << "En büyük değer = " << a << endl;
		cout << "En küçük değer = " << b << endl;
	}
	else if (b > a && a > c) {
		cout << "En büyük değer = " << b << endl;
		cout << "En küçük değer = " << c << endl;
	}
	else if (b > a && b > c && c > a) {
		cout << "En büyük değer = " << b << endl;
		cout << "En küçük değer = " << a << endl;
	}
	else if (c > a && a > b) {
		cout << "En büyük değer = " << c << endl;
		cout << "En küçük değer = " << b << endl;
	}
	else if (c > a && c > b && a < b) {
		cout << "En büyük değer = " << c << endl;
		cout << "En küçük değer = " << a << endl;
	}

}