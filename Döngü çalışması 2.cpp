#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "Lütfen ekrana istediğiniz kadar sayı giriniz ve daha sonra -1 yazınız" << endl;
	int a{0};
	int b = 0;
	int c{0};
	while (b != -1) {
		cin >> b;
		if (b == -1 && a==0) {
			cout << "Hiç sayı girmediniz!!!" << endl;
		}
		else if (b == -1) {
			cout << "Girdiğiniz sayıların ortalaması = " << (float)a / c;
		}
		else {
			a += b;
			c++;
		}
	}
}