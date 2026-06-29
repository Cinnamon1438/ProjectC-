#include <iostream>
#include <cstdlib>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

using namespace std;

int main() 
{
    char src[] = "Yang Baca Keren";
    
    /* cukup besar untuk menyimpan konten dari src */
    
    char tujuan[20];
    
    strcpy(tujuan,src); //Untuk menCopy nilai variable
    cout << tujuan;
	
	return 0;
}
