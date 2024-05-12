#include <iostream>
using namespace std;
int main()
{
	int marks;
	cout << " Enter your marks \n";
	cin >> marks;

	if (marks >= 90 && marks <=100)
		cout << "you got A \n";
	else if (marks >= 80 && marks < 90)
		cout << "you got B \n";
	else if (marks >= 70 && marks < 80)
		cout << "you got C \n";
	else if (marks >= 60 && marks < 70)
		cout << "you got D \n";
	else
		cout << "you got F \n";



	return 0;
}