#include <iostream>
using namespace std;
int main()

{
	int counter = 1, grade = 0, sum = 0;
	cout << "Enter 5 grades or -1 to end \n";
	while (counter <= 5 && grade !=-1)
	{

		cin >> grade;
		sum += grade;
		counter++;

	}

	cout << "the sum of grades is " << sum << "\n";

	return 0;
}