#include<iostream>

using namespace std;
bool asalmi(int y) {
	if (y == 1) {
		return false;
	}
	for (int i = 2; i < y; i++) {
		if (y % i == 0) {
			return false;
		}
	}
	return true;
}

int asal(int x) {
	int sayac{ 0 };
	int i;
	for (i = 1; sayac < x; i++) {
		if (asalmi(i)) {
			sayac++;
		}
	}
	cout <<x<<". asal sayı = " << i - 1 << endl;
	return i-1;
}

int main() {
	while (true) {
		setlocale(LC_ALL, "Turkish");
		cout << "Kaçıncı asal sayıyı bulmak istiyorsunuz: ";
		int sayi;
		cin >> sayi;
		asal(sayi); 
	}
}