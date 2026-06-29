#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int m = 82, n = 26;
    
    cout << m << " << 2" << " = " << (m<<2) << endl;
    cout << m << " >> 2" << " = " << (m>>2) << endl;
    cout << m << " & " << n << " = " << (m&n) << endl;
    cout << m << " | " << n << " = " << (m|n) << endl;
    cout << m << " ^ " << n << " = " << (m^n) << endl;
    cout << " ~ " << m << " = " << -m << endl;
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
