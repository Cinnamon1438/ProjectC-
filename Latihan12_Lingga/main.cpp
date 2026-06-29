#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
    int m = 5, n = 7;
    
    if (m == n) cout << m << " sama dengan " << n << endl;
    else if (m != n) cout << m << " tidak sama dengan " << n << endl;
    else if (m > n) cout << m << " lebih besar dari " << n << endl;
    else if (m < n) cout << m << " lebih kecil dari " << n << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
