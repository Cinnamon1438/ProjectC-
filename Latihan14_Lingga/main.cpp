#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int m = 66, n;
    n = ++m;
    
    cout << " m = " << m << " , n = " << n << endl;
    
    n = m++;
    
    cout << " m = " << m << " , n = " << n << endl;
    cout << " m = " << m++ << endl;
    cout << " m = " << m << endl;
    cout << " m = " << ++m << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
