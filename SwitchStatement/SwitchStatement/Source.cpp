#include <iostream>

using namespace std;

int main()

{
	int i;
	cout << "enter value of I \n";
	cin >> i;
	
	switch (i)

	{

	case (10):
			cout << "i am in case 1 \n";
			
			break;

	case (20):
	case (30):
		cout << "the user entered 20 or 30 \n";
		    break;

	case (40):
			cout << "i am in case 4 \n";

			break;

	default:
		cout << "i am in default case  \n";

		break;
	}


	return 0;
}