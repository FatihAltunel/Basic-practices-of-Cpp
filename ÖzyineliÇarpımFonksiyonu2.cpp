#include <iostream>

using namespace std;

int carpım(int a, int b) {
	if (b == 0 || a == 0) {
		return 0;
	}
	if (b < 0) {
		return a + carpım(0 - a, 0 - b+1);
	}
	else { return a + carpım(a, b - 1); }
}

int main() {
	setlocale(LC_ALL, "Turkish"); 
	cout << "Bu program girdiğiniz iki tam sayının çarpımını özyinelemeli bir fonksiyon oluşturarak hesaplar." << endl;
	cout << "Lütfen 2 sayı giriniz: " << endl; 
	int sayı1, sayı2;
	cin >> sayı1 >> sayı2;
	cout << "Sonuç = "<< carpım(sayı1, sayı2);
}