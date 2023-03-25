#include<iostream>
using namespace std;
int main() {
	int terim;   
	setlocale(LC_ALL, "Turkish");
	cout << "Bu program 2 kişi için istenilen sayı kadar zar atar ve sonuçları karşılaştırarak yüksek sayı elde edenin hanesine +1 puan ekler. En sonunda puanı fazla olan kazanır ve kazananı ekrana yazdırır." << endl;
	cout << "Kaç defa zar atılsın? ";
	cin >> terim; 
	int ilkoyuncu = 0; 
	int ikincioyuncu = 0;  
	int*dizi1=new int[terim];    
	int*dizi2=new int[terim];   
	srand(time(NULL)); 
	for (int i = 0; i < terim; i++) {
		dizi1[i] = rand()%6+1; 
		dizi2[i] = rand()%6+1;
	}
	cout << "İlk oyuncunun zarları = ";
	for (int i = 0; i < terim; i++) {
		cout << dizi1[i] << " ";
	}
	cout << endl;
	cout << "İkinci oyuncunun zarları = ";
	for (int i = 0; i < terim; i++) { 
		cout << dizi2[i]<<" "; 
	} 
	cout << endl;  
	for (int i = 0; i < terim; i++) {
		if (dizi1[i] > dizi2[i]) {
			ilkoyuncu++;
		}
		else if (dizi1[i] < dizi2[i]) {
			ikincioyuncu++;
		}
	}
	cout << "İlk oyuncunun skoru = " << ilkoyuncu << endl; 
	cout << "İkinci oyuncunun skoru = " << ikincioyuncu << endl; 

	if (ilkoyuncu > ikincioyuncu) {
		cout << "İlk oyuncu " << ilkoyuncu - ikincioyuncu << " farkla kazanır!" << endl; 
	}
	else if (ilkoyuncu < ikincioyuncu) {
		cout << "İkinci oyuncu " << ikincioyuncu - ilkoyuncu << " farkla kazanır!" << endl;
	}
	else if (ilkoyuncu = ikincioyuncu) {
		cout << "İki oyuncunun da puanları eşittir. Oyunu bir daha oynayın!" << endl; 
	}
	delete[]dizi1;
	delete[]dizi2;
	return 0; 
} 