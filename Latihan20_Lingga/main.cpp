#include <cstdlib>
#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int nilai;
    
    cout << "Masukkan nilai anda : ";
    cin >> nilai;
    cout << "Anda memperoleh nilai " << nilai << endl;
    cout << "Apakah anda telah puas mendapat nilai ? " << nilai << "\n";
    
    getch ();
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
