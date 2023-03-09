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

	int enkucuk = a;
	int enbuyuk = a;

	if (b < enkucuk) {
		enkucuk = b;
	}
	if (c < enkucuk) {
		enkucuk = c;
	}
	if (b > enbuyuk) {
		enbuyuk = b;
	}
	if (c > enbuyuk) {
		enbuyuk = c; 
	}
	cout << "En büyük değer = " << enbuyuk << endl;
	cout << "En küçük değer = " << enkucuk << endl;
	return 0;
}