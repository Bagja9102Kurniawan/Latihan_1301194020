#include <iostream>
using namespace std;

int a,b;
int main (){
	cout << "Masukkan Angka : ";
	cin >> a;
	for (int i=1; i <= a; i++) {
		if ((a%i)== 0 ) 
			(b++);
	}
	if (b == 2)
		cout << a << "\tAdalah Bilangan Prima";
	else
		cout << a << "\tBukan Bilangan Prima";
}
