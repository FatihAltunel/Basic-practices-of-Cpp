#include<iostream>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "Dizinizin kaç terimli olacağını giriniz: ";
	int temp; 
	int terimsayisi;
	cin >> terimsayisi;
	cout << endl;
	int* dizi = new int[terimsayisi];
	for (int i = 0; i < terimsayisi; i++) {
		cout << "Dizinin " << i + 1 << ". terimini giriniz: ";
		cin >> dizi[i];
		cout << endl;
	}
	cout << "Dizi = [";
	for (int i = 0; i < terimsayisi; i++) {
		if (i < terimsayisi - 1) {
			cout << dizi[i] << ",";
		}
		else {
			cout << dizi[i] << "] ";
		}
	}
	cout << endl;  
	for (int i = 0; i < terimsayisi; i++) {
		for (int j = i+1; j < terimsayisi; j++) {
			if (dizi[i] < dizi[j]) {
				temp = dizi[i]; 
				dizi[i] = dizi[j];
				dizi[j] = temp; 
			}
		}
	}
	cout << "Dizi elemanlarının büyükten küçüğe sıralanmış hali = ";
	for (int i = 0; i < terimsayisi; i++) {
		cout << dizi[i] << " ";
	}
	cout << endl; 
	cout << "Dizi elemanlarının küçükten büyüğe sıralanmış hali = ";
	for (int i = terimsayisi-1; i >= 0; i--) {
		cout << dizi[i] << " ";
	}
	cout << endl;
	return 0;
}