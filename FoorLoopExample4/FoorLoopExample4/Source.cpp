#include<iostream>
using namespace std;
int main()
{
	int number, sumeven = 0, sumodd = 0;
	for (int i = 1; i <= 10; i++)
	{
		cout <<" Enter number " << "\n";
		cin >> number;
		if (number % 2 == 0)
			sumeven += number;
		else
			sumodd += number;
	}
	cout <<"The Sum of Even numbers is " << sumeven << "\n";
	cout << "The Sum of odd numbers is " << sumodd << "\n";


	return 0;

}