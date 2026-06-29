#include <iostream>
// Sebagai FileHeader, agar fungsi input output standar dapat digunakan

#include <cstdlib>
// Sebagai FileHeader, agar fungsi random number generation dapat digunakan

#include <ctime>
 // sebagai FileHeader, agar fungsi waktu dapat digunakan
 
#define MINACAK 1
// Mendeklarasikan nilai konstanta

#define MAXACAK 10
// Mendeklarasikan nilai konstanta
   
using namespace std;
   
int main()
{
    srand(time(NULL));
    // Sebagai random number generetion, agar dapat mengeluarkan/menggunakan angka acak
    
    int jawaban = (rand()%(MAXACAK-MINACAK+1)) + MINACAK;
    // Mendeklarasikan pada variable jawaban agar angka acak dihitung
    
    cout << "SELAMAT DATANG DI GAME TEBAK ANGKA" << endl;
	cout << "==================================" << endl << endl;
    // Mencetak string
     
	cout << "Angka yang akan ditebak berada dalam batasan : " << MINACAK << " sampai " << MAXACAK << endl << endl;
	// Mencetak nilai konstanta
	
	int KESEMPATAN = 5;
	int tebakan = KESEMPATAN;
	// Mendeklarasikan isi pada variable
	
	bool menang = false;
	// Mendeklarasikan boolean sebagai status false
	
	int angka;
	// Mendeklarasikan variable
	
	do 
	// Menggunakan function do, agar dapat membuat suatu kelompok kondisi selama program dijalankan
	{
		cout << "Masukkan tebakan anda: ";
	    cin >> angka;
	    // Mencetak string, dan mengisi nilai pada variable angka
	    tebakan--;
	    // variable Tebakan di-decrement
	     
	    if (angka == jawaban) 
	    // Menggunakan function IF, untuk membuat beberapa kondisi
		{
	        menang = true;
	    }
		else
		{
	        if (angka<jawaban) 
			{
	            cout << "Tebakan anda terlalu kecil" << endl;
	        }
			else
			{
	            cout << "Tebakan anda terlalu besar" << endl;
	        }
	        cout << "Kesempatan tersisa : " << tebakan << endl;
	     
	    }
	    cout << endl;
	}
	
	while ((tebakan > 0) && (!menang));
	// Selama program berjalan, maka kondisi yang ada pada while akan dijalankan sampai terpenuhi
	 
	if (menang)
	{
		cout << "Benar!" << endl;
	    cout << "Selamat, Anda telah memenangkan permainan ini!" << endl;
	}
	else
	{
	    cout << "Maaf, Anda kurang beruntung!" << endl;
    	cout << "Angka yang akan ditebak adalah " << jawaban << endl;
	}
	// Menggunakan function IF, untuk membuat beberapa kondisi
	
    return 0;
}

