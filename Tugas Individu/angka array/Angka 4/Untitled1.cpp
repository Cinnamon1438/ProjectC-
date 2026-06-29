#include <cstdlib>
#include <iostream>

using namespace std ;

int main()
{
	int i, j ;
	int angka2[8][8] = {
						{ 0, 1, 0, 0, 0, 0, 1, 0 },
						{ 0, 1, 0, 0, 0, 0, 1, 0 },
						{ 0, 1, 0, 0, 0, 0, 1, 0 },
						{ 0, 1, 0, 0, 0, 0, 1, 0 },
						{ 0, 1, 1, 1, 1, 1, 1, 0 },
						{ 0, 0, 0, 0, 0, 0, 1, 0 },
						{ 0, 0, 0, 0, 0, 0, 1, 0 },
						{ 0, 0, 0, 0, 0, 0, 1, 0 }
					   };
			
			for ( i = 0; i < 8; i++)
			{
				for ( j = 0; j < 8; j++)
				{
					if (angka2[i][j] != 0)
						putchar ('\xDB') ;
					else
						cout << ends ;	
				}
			cout << endl ;
			}
			system ("PAUSE") ;
			return EXIT_SUCCESS ;		
}

