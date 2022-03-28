#include <iostream>
int add(int x, int y, int z)
{
	using namespace std;
	cout << "Calculation in progress.." << endl;
	return x + y + z;
}

int main()
{
	using namespace std;
	cout << "Sum 100 + 200 + 300 = " << add (100, 200, 300) << endl;
	return 0;
}
