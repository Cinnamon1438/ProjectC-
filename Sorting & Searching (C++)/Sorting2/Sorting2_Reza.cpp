#include <iostream>
#include <conio.h>
//Bubble Sort Ascending & Descending Program
// By : Lingga

using namespace std;

int main ()
{
	int nilai['n'];
	int temp;
	int n;
	
	cout << "==============================================" << endl;
	cout << "  Ascending & Descending Bubble Sort Program " << endl;
	cout << "     Create by : Lingga " << endl;
	cout << "==============================================" << endl;
	cout << "                Banyak Data : "; cin >> n;
	cout << "==============================================" << endl;
	cout << endl;
	
	for (int a = 1; a <= n; a++)
	{
		cout << "Nilai[" << a << "] : ";
		cin >> nilai[a];
	}
	cout << "\n\n";
	
	cout << "===========================" << endl;
	cout << "   Data Sebelum Diurutkan  " << endl;
	cout << "===========================" << endl;
	for (int a = 1; a <=n; a++)
	{
		cout << nilai[a] << " ";
	}
	
	for (int a = n-1; a >= 1; a--)
	{
		for (int b = 1; b <= a; b++)
		{
			if (nilai[b] > nilai[b+1])
			{
				temp = nilai[b+1];
				nilai[b+1] = nilai[b];
				nilai[b] = temp;
			}
		}
	}
	cout << endl;
	
	cout << "\n\nData Setelah Diurutkan (Ascending)" << endl;
	cout << "======================================" << endl;
	for (int a = 1; a <= n; a++)
	{
		cout << nilai[a] << " ";
	}
	cout << endl;
	
	cout << "=======================================" << endl;
	cout << "\n\nData Setelah Diurutkan (Descending)" << endl;
	cout << "=======================================" << endl;
	for (int a = n; a >= 1; a--)
	{
		cout << nilai[a] << " ";
	}
	cout << endl;
	
	cout << "=======================================" << endl;
	
	getch();
	system("PAUSE");
	system("color 0E");
	return 0;
}

