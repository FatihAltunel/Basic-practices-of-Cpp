#include <iostream>
#include <clocale>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	while(true){
	int boyut;
	cout << "Matriksin boyutunu giriniz: ";
	cin >> boyut;

	for (int a = boyut; a >= 1; a--) {
		for (int dongu = 1; dongu <=boyut; dongu++) {
			if (dongu == a||dongu==boyut-a+1) {
				cout << "1";
			}
			else {
				cout << "0";
			}
		}
		cout << endl;
	}
	}
}