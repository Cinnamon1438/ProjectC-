#include <cstdlib>
#include <iostream>
#include <conio.h>
// Searching Program
// By : Reza Kurnia Khoirunisa

using namespace std;

int main ()

{
	int c, i, posisi;
	int A[20] = {3, 2, 4, 10, 20, 1, 5, 8, 7, 9, 6, 5, 11, 12, 14, 13, 16, 15, 17, 19};
	
	cout << endl;
	cout << "Data : ";
	for (i = 0; i < 20; i++)
	{
		cout << A[i] << " ";
	}
	
	cout << endl;
	cout << "\nData Yang Ingin Dicari : ";
	cin >> c;
	cout << endl;

	i = 0;
	posisi = 0;
	while (i < 19 && A[i] != c)
	{
		i++;
	}
	
	if (A[i] != c)
	{
		cout << "Maaf, Data Yang Dicari Tidak Ada";	
		cout << endl;
	}
	
	else if (posisi = i + 1)
	cout << "Ditemukan Pada Posisi Ke = " << posisi << endl;
	
	getch();
	
	system("PAUSE");
	system("color 0B");
	return 0;
	
}

