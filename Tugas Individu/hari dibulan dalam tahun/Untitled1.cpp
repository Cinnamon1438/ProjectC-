#include <iostream.h>

int main()
{
	int hari;
	int bulan;
	int tahun;
	char ulang;
    
	do
    {
	    system ("color b");
	    system ("title By : Moh.Ridwan Hanafi");
	    system ("cls");
	    
	    // Program untuk menghitung berapa banyak hari dibulan dalam tahun
	    
		cout << "Masukkan Hari : ";
	    cin >> hari;
	    
		tahun = hari/365;
	    bulan = hari/30;
	    
		cout << tahun << " ada " << bulan << " menit\n" << endl;
	    cout << detik << " ada " << jam << " jam\n" << endl;
	    cout << detik << " ada " << hari <<" hari\n" << endl;
	    
		cout << "Apakah ingin menghitung lagi [Y/T] : "<<endl;
		cin >> ulang;
	}
	
	while(ridwan=='y'||ridwan=='Y');

    return 0;
}
