#include <iostream>
using namespace std;
int main()
{
	int grade = 0, sum = 0;
	for (int i = 1; i <= 6; i++)
	{
		cout << "Enter Grade \n";
		cin >> grade;
		sum += grade;

	}
	cout << "The Average Grade Is " << sum / 6 << "\n";


	return 0;
}