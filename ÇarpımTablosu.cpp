#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");
	int sutun, satir;
	cout << "Lütfen istediğiniz çarpım tablosunun sütun sayısını giriniz: ";
	cin >> sutun;
	cout << "Lütfen istediğiniz çarpım tablosunun satır sayısını giriniz: ";
	cin >> satir;
	for (int a = 1; a <= sutun; a++) {
		for (int b = 1; b <= satir; b++) {
			cout << a * b<<"\t";
		}
		cout << endl;
	}



}