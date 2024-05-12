#include <iostream>
using namespace std;
int main()
{
	int number = 0 , sum = 0;
	while (number >= 0)
	{

		cout << "enter positive number \n";
		cin >> number;
		sum += number;
	}
	cout << " the sum of positive numbers " << sum << "\n";

	return 0;
}