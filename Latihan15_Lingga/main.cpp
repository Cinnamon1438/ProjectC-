#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int m = 5, n;
    n = m++, n;
    
    cout << " m = " << m << " n = " << n << endl;
    cout << ++m << " " << ++m << " " << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
