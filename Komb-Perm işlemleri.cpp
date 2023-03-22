#include<iostream>
#include<clocale>

using namespace std;

int faktoriyel(int x) {
	int faktoriyel1{ 1 }; 
		for (int i = 1; i <= x; i++) {
			faktoriyel1 *= i;
		}
	return faktoriyel1;
}

int kombinasyon(int n, int r) {
	int sonuc = faktoriyel(n) / (faktoriyel(r) * faktoriyel(n - r));
	return sonuc;
}

int permütasyon(int n, int r) {
	int sonuc = faktoriyel(n) / faktoriyel(n - r);
	return sonuc;
}

int main() {

while(true){
	setlocale(LC_ALL, "Turkish");
	char harf;
	cout << "Kombinasyon işlemi yapmak istiyorsanız C, Permütasyon işlemi yapmak istiyorsanız P harfini giriniz: ";
	cin >> harf;

	if (harf == 'C' || harf == 'c') {
		int sayı1, sayı2;
		cout << "Lütfen seçim sayısını(n) giriniz: " << endl;
		cin >> sayı1;
		cout << "Lütfen eleman sayısını(r) giriniz: " << endl;
		cin >> sayı2;
		if (sayı1 < sayı2) {
		cout << "Seçim sayısı(n), eleman sayısına(r) eşit veya eleman sayısından(r) büyük olmalıdır. (n>=r)" << endl;
		}
		else{
		cout << "C(" << sayı1 << "," << sayı2 << ") " << "Sonucunuz = " << kombinasyon(sayı1, sayı2) << endl;
		}
	}
	else if (harf == 'P' || harf == 'p') {
		int sayı1, sayı2;
		cout << "Lütfen seçim sayısını(n) giriniz: " << endl;
		cin >> sayı1;
		cout << "Lütfen eleman sayısını(r) giriniz: " << endl;
		cin >> sayı2;
		if (sayı1 < sayı2) {
		cout<<"Seçim sayısı(n), eleman sayısına(r) eşit veya eleman sayısından(r) büyük olmalıdır. (n>=r)" << endl; 
		}
		else {
		cout << "P(" << sayı1 << "," << sayı2 << ") " << "sonucunuz = " << permütasyon(sayı1, sayı2) << endl;
		}
	}
	else {
		cout << "Sadece ""C, c"" ve ""P, p"" harflerini girebilirsiniz!!!" << endl;
	}
	cout << endl;
}
}
