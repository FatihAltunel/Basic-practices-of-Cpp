#include <iostream>

using namespace std;

bool asalmi(int x) {
	for (int i = 2; i < x; i++) {
		if (x % i == 0 ) {
			return false; }
	}
	return true;
}
int main() {
	setlocale(LC_ALL, "Turkish"); 
	int c = 1;
	int d;
	cout << "Bu program ilk x tane asal sayıyı sırasıyla ekrana yazdırır." << endl;
	cout << "Lütfen bir sayı giriniz:";
	cin >> d;  
	cout << endl; 
	for (int a = 1; c <= d; a++) { 
		if (asalmi(a) == true) {
			cout<<c<<".asal sayı --> "<<"\t" << a << endl;
			c++;
		}
	}

}