#include <iostream>
#include <clocale>
#include <math.h>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int mesafe;
	float surat;
	cout << "Lütfen aradaki mesafeyi km cinsinden giriniz = ";
	cin >> mesafe;
	cout << "Lütfen mesafeyi alacağınız sürati km/h cinsinden giriniz = ";
	cin >> surat;
	cout << "Şu kadar saatte varmanız planlanıyor = " << (float)mesafe / surat;
	return 0;
}