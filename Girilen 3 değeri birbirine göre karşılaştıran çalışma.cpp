#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int a, b, c ;
	cout << "Lütfen ilk değeri giriniz = ";
	cin >> a;
	cout << "Lütfen ikinci değeri giriniz = ";
	cin >> b;
	cout << "Lütfen üçüncü değeri giriniz = ";
	cin >> c;
	cout << "Girdiğiniz değerler = " << a << "," << b << "," << c << endl;

	if (b<a && c>a) {
		cout << a << " değeri, " << b << "'den büyük ve " << c << "'den küçüktür" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir sayıdır" << endl;
		cout << "Girdiğiniz üç sayı da birbirine eşit değildir" << endl;
	}
	else if (b > a && c < a) {
		cout << a << " değeri, " << b << "'den küçük ve " << c << "'den büyüktür" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir sayıdır" << endl;
		cout << "Girdiğiniz üç sayı da birbirine eşit değildir" << endl;
	}
	else if (a < b && a < c) {
		cout << a << " değeri "<<b<<" ve "<<c<<" değerinden küçüktür" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir sayı değildir" << endl;
		cout << a << " değeri " << b << " veya " << c << "'den daha büyük bir sayı değildir" << endl;
		cout << "Girdiğiniz üç sayı da birbirine eşit değildir" << endl;
	}
	else if (a > b && a > c) {
		cout << a << " değeri " << b << " ve " << c << " değerinden büyüktür" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir sayı değildir" << endl;
		cout << a << " değeri " << b << " veya " << c << "'den daha küçük bir sayı değildir" << endl;
		cout << "Girdiğiniz üç sayı da birbirine eşit değildir" << endl;
	}
	else if (a == b == c) {
		cout << "Girdiğiniz değerlerin hepsi birbirine eşittir" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir sayı değildir" << endl;
	}
	else if (a == b && a < c) {
		cout << a << " değeri " << b << " ile eşit ve aynı zamanda " << c << " değerinden küçüktür" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir değerdir" << endl;
		cout << "Girdiğiniz değerlerden ikisi birbirine eşittir" << endl;
		cout << a << " değeri " << c << " değerinden daha büyük bir değer değildir" << endl;
	}
	else if (a == b && a > c) {
		cout << a << " değeri " << b << " ile eşit ve aynı zamanda " << c << " değerinden büyüktür" << endl;
		cout << "Girdiğiniz değerlerden ikisi birbirine eşittir" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir değer değildir" << endl;
		cout << a << " değeri " << c << " değerinden daha küçük bir değer değildir" << endl;
	}
	else if (a == c && a < b) {
		cout << a << " değeri " << c << " ile eşit ve aynı zamanda " << b << " değerinden küçüktür" << endl;
		cout << "Girdiğiniz değerlerden ikisi birbirine eşittir" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir değerdir" << endl;
		cout << a << " değeri " << b << " değerinden daha büyük bir değer değildir" << endl;
	}
	else if (a == c && a > b) {
		cout << a << " değeri " << c << " ile eşit ve aynı zamanda " << b << " değerinden büyüktür" << endl;
		cout << "Girdiğiniz değerlerden ikisi birbirine eşittir" << endl;
		cout << a << " değeri " << b << " ve " << c << " arasında bir değer değildir" << endl;
		cout << a << " değeri " << b << " değerinden daha büyük bir değerdir" << endl;
	}
	else {
		cout << "Lütfen bir sayı giriniz" << endl;
	}
	return 0;
}