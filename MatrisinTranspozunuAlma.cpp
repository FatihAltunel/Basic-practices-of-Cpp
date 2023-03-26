#include<iostream>
using namespace std;
int main() {
	int dizi[3][3] = { 5,4,3,4,0,4,7,10,3 };
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << dizi[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;	
	cout << endl;	
	cout << endl;	
	cout << endl;	 
	for (int i = 0; i < 3; i++) {
		for (int j = i+1; j < 3; j++) { 
			int temp;
			temp = dizi[i][j];
			dizi[i][j] = dizi[j][i];
			dizi[j][i] = temp;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			cout << dizi[i][j] << "\t";
		}
		cout << endl;
	}
}
