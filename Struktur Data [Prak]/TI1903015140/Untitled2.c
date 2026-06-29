#include <stdio.h>

int main(void)
{
	char nama[10];
	int umur;
	char jk[10];
	
	printf("Latihan Modul 1 : \n\n");
	printf("Nama : ");
	scanf("%s", &nama);
	printf("Umur : ");
	scanf("%d", &umur);
	printf("Jenis Kelamin [P/L] : ");
	scanf("%s", &jk);
	
	printf("\nNama : %s \n" ,nama);
	printf("Umur : %d \n" ,umur);
	printf("Jenis Kelamin : %s \n" ,jk);
	
	return 0;
}

