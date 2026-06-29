#include <cstdlib>
#include <iostream>
#include <conio.h>
// Complex Searching Program
// By : Lingga

using namespace std;

int main ()

{
	cout << endl;
	cout << "Nama        : Lingga " << endl;
	cout << "Kelas       : 1C TI UHAMKA           " << endl;
	cout << "Mata Kuliah : Praktikum Algoritma & Dasar Pemrograman" << endl;
	cout << endl;
	
	int Nilai[20];
	int i, N, angka, bilangan;
	
	cout << "Masukkan Banyaknya Bilangan = ";
	cin >> N;
	cout << endl;
	
	// Membaca Elemen Array
	for (i = 0; i < N; i++)
	{
		cout << "Masukkan Elemen Ke -  " << i << " = ";
		cin >> Nilai[i];
	}
	cout << endl;
	
	// Mencetak Elemen Array
	cout << "Deretan Bilangan = ";
	for (i = 0; i < N; i++)
	cout << Nilai[i] << " ";
	cout << endl << endl;
	
	cout << "Masukkan Bilangan Yang Dicari = ";
	cin >> bilangan;
	cout << endl;
	
	// Melakukan Pencarian 
	i = 0;
	do 
	{
		if (Nilai[i] == bilangan)
		angka = Nilai[i];
		i++;
	}
	
	while (i < N);
	if (angka == bilangan)
	cout << " Bilangan " << bilangan << " Ditemukan" << endl;
	else
	cout << " Bilangan " << bilangan << " Tidak Ditemukan" << endl;
	
	getch();
	
	system("PAUSE");
	system("color 0B");
	return 0;
}

