#include <iostream>
int main()
{
	using namespace std;
	int x = 12, y = 42, z = 88;
	cout << "Before x: " << x << " y: " << y;	
	cout << " z: " << z << "\n\n";
	z = x = y + 13;
	cout << "After  x: " << x << " y: " << y;
	cout << " z: " << z << "\n\n";
	return 0;


	
}
