#include <iostream>
#include <conio.h>
#include <iomanip>
// Ascending Selection Sort Program
// By : Lingga

using namespace std;

int main ()

{
	// Deklarasi Array dengan 7 Elemen 
	int A[7];
	int j, k, i, temp;
	int jmax, u = 6;
	
	// Memasukkan Nilai Sebelum Diurutkan
	cout << "======================================" << endl;
	cout << " **Ascending Selection Sort Program** " << endl;
	cout << "          Create By : Lingga          " << endl;
	cout << "======================================" << endl;
	cout << endl;
	cout << "Masukkan 7 Data Pada Elemen Array : " << endl;
	
	for (i = 0; i < 7; i++)
	{
		cout << "A["<< i << "] = ";
		cin >> A[i]; 
	}
	
	// Proses Pengurutan Secara Menaik (Ascending)
	for (j = 0; j < 7; j++)
	{
		jmax = 0;
		for (k = 1; k <= u; k++)
		if (A[k] > A[jmax])
		jmax = k;
		temp = A[u];
		A[u] = A[jmax];
		A[jmax] = temp;
		u--;
	}
	
	// Menampilkan Nilai Setelah Diurutkan
	cout << "\nNilai Setelah Diurutkan = " << endl;
	for (i = 0; i < 7; i++)
	cout << A[i] << " ";
	cout << endl;
	
	getch();
	system("PAUSE");
	return 0;
}

