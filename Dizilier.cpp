#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	cout << "Diziniz kaç terimli olsun: ";
	int terimsayisi;
	cin >> terimsayisi;
	int* dizi = new int[terimsayisi];
	for (int i = 0; i < terimsayisi; i++) {
		cout <<"Lütfen " << i + 1 << ". terimi giriniz: ";
		cin >> dizi[i];
	}
	cout << "Diziniz = [";
	for (int i = 0; i < terimsayisi; i++) {
		if (i < terimsayisi-1) {
			cout<< dizi[i]<<", ";
		}
		else if (i = terimsayisi - 1) {
			cout << dizi[i]<<"]" << endl;
		}
	}
	int enbuyuk = dizi[0];
	int enkucuk = dizi[0];
	for (int i = 0; i < terimsayisi; i++) { 
		if (dizi[i] > dizi[0]) {
			enbuyuk = dizi[i];
		}
		if (dizi[i] < dizi[0])
			enkucuk = dizi[i];
	}
	cout << "Dizinin en büyük sayısı = " << enbuyuk << "\nDizinin en küçük sayısı = " << enkucuk << endl;
	int toplam{ 0 };
	for (int i = 0; i < terimsayisi; i++) {
		toplam += dizi[i];
	}
	float ortalama = (float) toplam/terimsayisi;
	cout << "Dizideki terimlerin toplamı = " << toplam << "\nDizideki terimlerin ortalaması = " << ortalama << endl; 
	delete[]dizi; 
	return 0;
}
