/*2 üzeri n -1 */
#include <iostream>
#include<math.h>

using namespace std;

int mersenne(int n) {
	int a = pow(2, n) - 1;
	return a; 
}
int main() {
	while (true) {
		setlocale(LC_ALL, "Turkish");
		cout << "Mersenne sayısı = 2^n -1\nTerim sayısını giriniz: ";
		int adım;
		cin >> adım;
		for (int i = 0; i < adım; i++) {
			cout << i + 1 << ". terim -> " << mersenne(i) << endl;
		}
		cout << endl;
	}
}