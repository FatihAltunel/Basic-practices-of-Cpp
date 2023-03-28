/*Bu program kullanıcıdan bir string ifade alarak bu ifadenin palindrome olup
olmadığını kontrol eder.
Örn. -->	abcba polindromdur
Örn. -->	abcbd polindrome değildir*/
#include<iostream>
using namespace std; 
int main() {
	while (true) {
		setlocale(LC_ALL, "Turkish");
		cout << "Lütfen bir dizgi giriniz: ";
		char girilen[100];
		cin >> girilen;
		char* p;
		char* q;
		p = girilen;
		q = girilen;
		while (*q != '\0') {
			q++;
		}
		q--;
		bool polindrome = true;
		while (q > p) { 
			if (*p != *q) {
				polindrome = false;
			}
			p++;
			q--;
		}
		if (polindrome) {
			cout << "Dizginiz bir polindrome'dur" << endl;
		}
		else {
			cout << "Girilen dizgi bir polindrome değildir" << endl;
		}
	}
}