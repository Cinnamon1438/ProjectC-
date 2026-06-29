#include <cstdlib>
#include <iostream>

using namespace std;

int main()
{
    int A, B, temp;
    
    cout << "A = ";
    cin >> A;
    cout << "B = ";
    cin >> B;
    
    temp = A;
    A = B;
    B = temp;
    
    cout << "Jadi sekarang : " << endl;
    cout << "A = " << A << endl;
    cout << "B = " << B << "\n";
    
    system("PAUSE");
    return EXIT_SUCCESS;
}
