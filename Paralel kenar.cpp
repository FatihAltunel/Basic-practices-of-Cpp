#include <iostream>
#include <clocale>
//N = BURAYI KULLANICI GİRİYOR İ=KAÇINCI ADIMDA OLDUĞU 
// 5*5 örnek
//  *	İ1 B2 Y1   2B+Y=N --> B=(N-Y)/2                                         
// *** 	İ2 B1 Y3   İ<=N/2 İKEN --> Y = 2(İ-1)+1																		
//***** İ3 B0 Y5   İ>(N/2) İKEN --> Y = 2(N-İ)+1     
// ***  İ4 B1 Y3 
//  *   İ5 B2 Y1 
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int n;
	cout << "Bir sayı giriniz:";
	cin >> n;

	for (int i = 1; i <= n; i++) {
		int y, b;
		if (i <= n / 2) {
			y = 2 * (i - 1) + 1;
		}
		else {
			y = 2 * (n - i) + 1;
		}
		b = (n - y) / 2;
		for (int j = 1; j <= b; j++) {
			cout << " ";
		}
		for (int j = 1; j <= y; j++) {
			cout << "*";
		}
		cout << endl;
	}




}