#include <iostream>
using namespace std;
int main()
{

	int number;

	cout << "Enter number \n";

	cin >> number;

	if (number > 0)
		if (number % 2 == 0)
			cout << "Even \n";
		else
		cout << "Odd \n";

	return 0;
}