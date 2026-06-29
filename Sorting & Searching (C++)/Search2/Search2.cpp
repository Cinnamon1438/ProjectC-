// Program Search Sequential
// By : Lingga

#include <stdio.h>
#include <conio.h>

int main()

{
	int data[8] = {8, 10, 6, -2, 11, 7, 1, 100};
	int cari;
	int flag = 0;
	
	printf ("Masukkan Data yang Ingin Dicari = ");
	scanf ("%d", &cari);
	
	for (int i = 0; i < 8; i++)
	{
		if (data[i] == cari) flag = 1;
	}
	
	if (flag == 1) printf ("Data Ada!\n");
	else printf ("Data Tidak Ada!\n");
	
	getch();
	return 1;
}
