#include <iostream> 
int main()
{
	using namespace std;
	int grade;
	cout << "Enter a grade: \n";
	cin >> grade;

	if ((grade >= 70 && grade < 80))
	{
		if (grade == 100)
		{ 
			cout << "You have A, lets go!\n";
			return 0 ;
		}

		if ((grade >= 90) && (grade < 100))
		{
			cout << "You have B, good work!\n";
			return 0;
		}
		
		if ((grade >= 80) && (grade < 90))
		{
			cout << "You failed test, sorry \n";
			return 0;
		}
		
		cout << "You have C\n";
	}
	else
		cout << "You failed test\n";
	return 0; 
	 
}
