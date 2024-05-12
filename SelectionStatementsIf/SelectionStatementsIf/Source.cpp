#include <iostream>
using namespace std;
int main()
{
	int grade = 60;
	cout << "enter your grade \n";
	cin >> grade;
	if (grade >= 60)
	{
		cout << "succeeded \n";
		cout << "go to the next level";
	}
	return 0;
}