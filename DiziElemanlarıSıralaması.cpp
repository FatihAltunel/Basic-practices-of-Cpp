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
	int toplam = 0;
	int carpim = 1;
	int teksayilartoplami = 0; 
	int teksayilar = 0;
	int enbuyukcift = dizi[4]; 
	int enkucukcift = dizi[0];
	for (int i = 0; i < terimsayisi; i++) {
		toplam += dizi[i];
		if (dizi[i] % 2 == 1) {
			teksayilartoplami += dizi[i];
			teksayilar++;
		}
		carpim *= dizi[i];
		if (dizi[i] % 2 == 0 && enbuyukcift < dizi[i]) {
			enbuyukcift = dizi[i]; 
		}
		if (dizi[i] % 2 == 0 && enkucukcift > dizi[i]) {
			enkucukcift = dizi[i];
		}
	}
	cout << "Dizinin elemanlarının aritmetik ortalaması = " << (float)toplam/terimsayisi << endl; 
	cout << "Dizinin elemanlarının geometrik ortalaması = " << pow(carpim, (float)1 / terimsayisi) << endl; 
	cout << "Dizinin tek sayı elemanlarının aritmetik ortalaması = " << (float)teksayilartoplami / teksayilar << endl; 
	cout << "Dizideki çift sayıların en büyüğü = " << enbuyukcift << endl; 
	cout << "Dizideki çift sayıların en küçüğü = " << enkucukcift << endl; 
	cout << "Dizideki çift sayıların en büyüğü ve en küçüğünün ortalaması = " << (float)(enbuyukcift + enkucukcift) / 2 <<
	return 0;
}
