#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	
	int thn, nmr;
	int mhs [3][4];
													
	mhs [0][0] = 51;								
	mhs [0][1] = 50;								
	mhs [0][2] = 45;								
	mhs [0][3] = 100;								
	mhs [1][0] = 80;								
	mhs [1][1] = 115;								
	mhs [1][2] = 60;								
	mhs [1][3] = 120;								
	mhs [2][0] = 110;
	mhs [2][1] = 120;
	mhs [2][2] = 75;
	mhs [2][3] = 200;
	
	cout << "Kode Program Studi\n";
	cout << "1. TM\n";
	cout << "2. TKJ\n";
	cout << "3. TMJ\n";
	cout << "4. TI\n" << endl;
	
	cout << "Masukkan Pilihan [1-4] = ";
	cin  >> nmr;
	cout << "Tahun Masuk [2011 - 2013] = ";
	cin  >> thn;
	
	cout << "Jumlah Mahasiswa = " << mhs [thn - 2011] [nmr - 1];
	cout << endl;
	
	getch();
}

