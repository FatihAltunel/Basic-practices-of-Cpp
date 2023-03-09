#include <iostream>
#include <clocale>

using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");
	int mesafe;
	float surat;
	cout << "Lütfen aradaki mesafeyi km cinsinden giriniz = ";
	cin >> mesafe;
	cout << "Lütfen mesafeyi alacağınız sürati km/h cinsinden giriniz = ";
	cin >> surat;
	int saat = mesafe / surat;
	float dakika = (float)mesafe / surat - saat;
	float dakika2 = dakika * 60; 
	int dakika3 = dakika * 60;
	float saniye = dakika2 - dakika3;
	int saniye2 = saniye * 60;
	cout << "Tahmini varış süreniz = " << saat << " Saat " << dakika3 << " Dakika " << saniye2 << " Saniyedir" << endl;

	return 0;
}
