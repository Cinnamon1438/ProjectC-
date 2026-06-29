#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() 
{
	const float phi = 3.14;
	float jari2, luas, kllng;
	jari2 = 7.0;
	
	luas = 0.5 * phi * jari2 * jari2;
	
	kllng = 2 * phi * jari2;
	
	cout << "Luas Lingkaran = " << luas << endl;
	cout << "Keliling Lingkaran = " << kllng << endl;
	
	system("PAUSE");
	return 0;
}
