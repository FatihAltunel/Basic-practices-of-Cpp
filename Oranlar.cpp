//kullanıcıdan bir sayı alıp verilen sayı kadar sayıyı okuyunuz
//bu sayıların içerisindeki pozitif negatif ve sıfırların oranını döndürünüz
#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int deger1;
	int pozitif = 0;
	int negatif = 0;
	int sıfır = 0;
	cout << "Ekrana yazdırmak istediğinizi sayı adetini giriniz = ";
	cin >> deger1;

	for (int i = 1; i <= deger1; i++) {
		int deger2;
		cin >>deger2 ;
		if (deger2 > 0)
			pozitif++;
		else if (deger2 < 0)
			negatif++;
		else {
			sıfır++;
		}		
	}
	cout << "Pozitifler = " << (float)pozitif / deger1 << endl; 
	cout << "Negatifler = " << (float)negatif / deger1 << endl; 
	cout << "Sıfırlar = " << (float)sıfır / deger1 << endl;
}