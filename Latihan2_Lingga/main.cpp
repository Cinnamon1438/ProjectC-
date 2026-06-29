#include <cstdlib>
#include <iostream>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() 
{
	double x, result;
	
	cout << "Square root of "; cin >> x;

	result = sqrt(x); /*Untuk mendapatkan hasil akar dari angka tersebut*/
	
	cout << "Is " << result << endl;
	
	return 0;
}
