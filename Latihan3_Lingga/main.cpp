#include <iostream>
#include <stdlib.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() 
{
	char word[20];
	float number, x;
	
	cout<<"Input random word like a number = "; cin>>word;
	
	number = atoi(word); //mengubah string(teks) menjadi int
	
	x = number + 10;
	
	cout<<"Change results plus 10 = "<<x;
	
	return 0;
}
