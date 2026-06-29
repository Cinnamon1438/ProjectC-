#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    char nama[100]; // Deklarasi variabel nama
    
    cout << "Masukkan nama anda : ";
    cin >> nama; // Meminta user untuk menginisialisasi variable nama
    cout << "Nama anda adalah " << nama << "\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
