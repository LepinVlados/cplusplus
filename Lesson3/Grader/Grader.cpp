#include <iostream>
int main()
{
	using namespace std;
	int grade; 
	cout << "Enter a grade(0-100): " << "\n";
	cin >> grade;

	if (grade >=70)
		cout << "You passed. Hooray!\n";
	else 
		cout << "You failed. Sigh\n";
	return 0; 
	
}
