#include<iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int gün,ıscı;
	cout << "1 işçi işi kaç günde bitirebiliyor?" << endl;
	cin >> gün;
	cout << "Toplam kaç işçi çalışacak?" << endl;
	cin >> ıscı;
	cout << "İşin bitme süresi = " << (float)gün/ıscı<< " gün";
	return 0;

}