#include <iostream>
#include <clocale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Turkish");

	for (int x = 0; x < 10; x++) {
		for (int y = 0; y < 10; y++) {
			for (int z = 0; z < 10; z++) {
				cout << x << " " << y << " " << z<<" ";
				cout << endl;
			}
		}
		cout << endl; 
	}
}