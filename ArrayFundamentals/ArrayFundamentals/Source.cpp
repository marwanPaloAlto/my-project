#include <iostream>
using namespace std;

int main()
{
	float sum = 0.0;
	float salaries[10];
	for (int i = 0; i <= 9; i++)
	{
		cout << " Enter Salary For Employee no " << i + 1 << " \n"; // +1 ÚáÔÇä ÊÈÞì ÇáãæÙÝ ÑÞã 1 ãÔ 0
		cin >> salaries[i];

	}

	for (int indx = 0; indx <= 9; indx++)
		salaries[indx] += salaries[indx] * 0.10;
	for (int i = 0; i < 10; i++)
		sum += salaries[i];

	cout << "The average salary is " << sum / 10 << "\n";

}
