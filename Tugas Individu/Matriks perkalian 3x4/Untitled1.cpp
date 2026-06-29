#include <iostream>

using namespace std;

int main()
{
	int matriksA[10][10], matriksB[10][10], hasil[10][10];
	int i, j, k, m, n, p, q, jumlah = 0;

	cout << "\tProgram Perkalian Matriks Ordo" << endl;
	cout << "*+==========================================+*\n" << endl;
	
	cout << "Masukkan jumlah baris matriks A : ";
	cin >> m;
	cout << "Masukkan jumlah kolom matriks A : ";
	cin >> n;
	cout << "Masukkan jumlah baris matriks B : ";
	cin >> p;
	cout << "Masukkan jumlah kolom matriks B : ";
	cin >> q;
	
	if(n != p)
	{
		cout << "Matriks tidak dapat dikalikan satu sama lain\n";
	}
	 
	else 
	{
		cout << "\nMasukkan elemen matriks A : \n";
		
		for(i = 0; i < n; i++)
		{
			for(j = 0; j < m; j++)
			{
				cin >> matriksA[i][j];
	  		}
	  		cout << endl;
		}
		
		cout << "\nMasukkan elemen matriks B : \n";
	
		for(i = 0; i < q; i++)
		{
			for(j = 0; j < p; j++)
			{
				cin >> matriksB[i][j];
		  	}
		  	cout << endl;
		}
	
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < q; j++)
			{
		    	for(k = 0; k < p; k++)
				{
		    		jumlah = jumlah + matriksA[i][j] * matriksB[i][j];
		    	}
		    	
		    	hasil[i][j] = jumlah;
		    	jumlah = 0;
			}
		}
	
		cout << "Hasil perkalian matriks: \n";
	
		for(i = 0; i < m; i++)
		{
			for(j = 0; j < q; j++)
			{
		    	cout << hasil[i][j] << "\t";
			}
			
			cout << endl;
		}
	}
	
	return 0;
}

