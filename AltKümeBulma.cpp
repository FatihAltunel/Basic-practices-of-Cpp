#include<iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "Turkish");  
	int terimsayisi1, terimsayisi2; 
	cout << "Lütfen ilk dizinin kaç elemanlı olacağını giriniz: ";
	cin >> terimsayisi1; 
	int* dizi = new int[terimsayisi1]; 
	cout << "Lütfen ilk dizinin elemanlarını giriniz: ";
	for (int i = 0; i < terimsayisi1; i++) {
		cin >> dizi[i]; 
	}
	cout << "Lütfen ikinci dizinin kaç elemanlı olacağını giriniz: ";
	cin >> terimsayisi2;
	int* dizi2 = new int[terimsayisi2];  
	cout<<"Lütfen ikinci dizinin elemanlarını giriniz: ";
	for (int i = 0; i < terimsayisi2; i++) {
		cin >> dizi2[i];  
	}
	int altkume = 0;
	cout << "İLK DİZİ = [";
	for (int i = 0; i < terimsayisi1; i++) { 
		if (dizi[i] == dizi[terimsayisi1-1]) { 
			cout << dizi[i] << "]"<<endl; 
		}
		else {
			cout << dizi[i] << ",";
		}
	}
	cout << "İKİNCİ DİZİ = [";
	for (int i = 0; i < terimsayisi2; i++) {
		if (dizi2[i] == dizi2[terimsayisi2-1]) {   
			cout << dizi2[i] << "]" << endl; 
		}
		else {
			cout << dizi2[i] << ","; 
		}
	}
	int terimsayisi3 = 0;  
	int dizi3[100] = {};   
	for (int i = 0; i < terimsayisi1; i++) {  
		for (int j = 0; j < terimsayisi2; j++) { 
			if (dizi2[j] == dizi[i]) { 
				altkume++;
				dizi3[terimsayisi3] = dizi[i];  
				terimsayisi3++;    
			}
		}
	}
	if (altkume == 0) {
		cout << "Alt küme yoktur!" << endl; 
	}
	else {
		cout << "Alt küme = [";
		for (int i = 0; i < altkume; i++) {   
			if (i == altkume-1) {  
				cout << dizi3[i] << "]" << endl;
			}
			else {
				cout << dizi3[i] << ",";  
			}
		}
	}
	return 0;
} 