#include<iostream>
#include<limits>
using namespace std;
int main() {
	while (true) {
		setlocale(LC_ALL, "Turkish");
		cout << "Bir zar atmak için Enter'a bas ";
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		int RandomNumber;
		srand(time(NULL));
	}
}