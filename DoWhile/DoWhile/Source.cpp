#include <iostream>
using namespace std;
int main()

{
	int counter = 8, grade = 0, sum = 0;
	cout << "enter 6 grades\n";
	do
	{

		
		cin >> grade;
		sum += grade;
		counter++;

	}
	while (counter <= 6);
	cout << "the sum of  grades is " << sum << "\n";

	return 0;
}