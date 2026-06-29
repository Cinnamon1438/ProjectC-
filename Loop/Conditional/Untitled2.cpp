#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	int a, b, angka;
	
	cout << "Masukkan jumlah baris bintang = ";
	cin >> angka;
	
	for(a = 1; a <= angka; a++)
	{
		for(b = 1; b <= a; b++)
		cout << "*" << " ";
		cout << endl;
	}
	
	getch();
	
	return 0;
}
