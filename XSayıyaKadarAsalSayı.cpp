#include <iostream>

using namespace std;

int asal(int a) {

	int kob{ 0 };
	for (int b = 1; b <= a; b++) {
		if (a % b == 0) {
			kob++;
		}
	}
	if (kob <= 2) {
		cout << a << endl;
	}
	return 0;
}

int main() {
	setlocale(LC_ALL, "Turkish"); 
	cout << "Bu program girdiğiniz sayıya kadar olan asal sayıları sırasıyla ekrana yazdırır" << endl;
	cout << "Lütfen bir sayı giriniz: ";
	int sayı; 
	cin >> sayı;
	for (int i = 1; i <= sayı; i++) {
		asal(i);
	}

}