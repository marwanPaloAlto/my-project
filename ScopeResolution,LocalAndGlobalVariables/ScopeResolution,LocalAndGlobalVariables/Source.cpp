#include <iostream>
using namespace std;

int x = 10;
int main()
{
	int x = 50;
	cout << ::x << "\n";
	cout << " local x " << x << " \n";

	{
		cout << " From inner block " << x << "\n";
		int x = 100;
		//cout << " From inner block " << x << "\n";
		cout << " Global x " << ::x << "\n";


	}


}