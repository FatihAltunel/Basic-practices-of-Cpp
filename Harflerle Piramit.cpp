#include <iostream>
#include <clocale>
using namespace std;
int main() {
	while (true) {
		setlocale(LC_ALL, "Turkish");
		char karakter;
		cout << "Lütfen büyük harf giriniz (Türkçe karakterler dahil değildir) :";
		cin >> karakter;
		for (char i = 65; i <= karakter; i++) {
			for (char j = 65; j <= i; j++) {
				cout << j;
			}
			for (char h = i - 1; h >= 65; h--) {
				cout << h;
			}
			cout << endl;
		}
	}
}