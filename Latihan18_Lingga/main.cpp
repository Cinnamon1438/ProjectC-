#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int m = 26, n = 82;
    int min = m < n ? m : n;
    
    cout << "Bilangan terkecil adalah " << min << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
