#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
	char a[10][10] = {("BUNGA"),("INDAH")};
	char c[10] = {("WANGI")};
	int b;
		
	for(b = 0; b <= 2; b++)
	{
		cout << a[b-1] << endl;
	
		if(a == 0)
		cout << endl;
	}
	
	cout << c << endl;
	
	cout << endl;
	
	return 0;
}

