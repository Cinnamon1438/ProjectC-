#include <iostream>
#include <conio.h>

using namespace std;

int main(){
int bil1,bil2,pil;
float hsl;
cout<<"Pilihlah menu di bawah ini :\n";
cout<<"[1] Penjumlahant\n";
cout<<"[2] Pengurangan\n";
cout<<"[3] Perkalian\n";
cout<<"Masukkan pilihan anda : ";
cin>>pil;

switch (pil)
  {  case 1:
          cout<<"Input bil 1 = ";cin>>bil1;
          cout<<"Input bil 2 = ";cin>>bil2;
      hsl=bil1+bil2;
      cout<<"Hasil penjumlahannya = "<<hsl<<endl<<endl;
      break;
  case 2:
          cout<<"Input bil 1 = ";cin>>bil1;
          cout<<"Input bil 2 = ";cin>>bil2;
      hsl=bil1-bil2;
      cout<<"Hasil pengurangannya = "<<hsl<<endl<<endl;
      break;
  case 3:
          cout<<"Input bil 1 = ";cin>>bil1;
          cout<<"Input bil 2 = ";cin>>bil2;
      hsl=bil1*bil2;
      cout<<"Hasil perkaliannya = "<<hsl<<endl<<endl;
      break;
  default :
      cout<<"Maaf blm terdaftar";
   }
getch();
}

