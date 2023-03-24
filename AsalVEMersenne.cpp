#include<iostream>
#include<math.h>
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
int main() {
	setlocale(LC_ALL, "Turkish"); 
	cout << "Asal ve Mersenne sayısı olan ilk kaç eleman gösterilsin: ";
	int sayac{ 0 };
	int girilen; 
	cin>>girilen;
	for (int i = 1; sayac < girilen; i++) {
		double islem = pow(2, i) - 1;
		if (asalmi(islem)) { 
			sayac++;
			cout<<sayac<<". terim --> " <<fixed << setprecision(0) << islem << endl;
		}
	}
} 
