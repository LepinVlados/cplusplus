#include <iostream>
int main()
{ 
	using namespace std;
	int grade;
	cout << "Enter a grade: " << "\n";
	cin >> grade;

	if (grade >= 70)
	{
		if(grade >=90)
			{
			cout << "You got A, Great job\n";
			 }
		if(grade >=80)
			{
			cout << "You got B, Good work\n";
			}
		cout << "You have C, Perfectly adequate\n";
	}
	else
		cout << "You god an F, You failed\n";
	return 0;

//Tak kak mi ubrali vse return krome poslednego, y nas vozvrashautsya vse zna4eniya
}
