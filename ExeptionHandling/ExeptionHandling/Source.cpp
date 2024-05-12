#include<iostream>
using namespace std;

int main()
{

	int x = 0, y = 0;
	cout << "Enter Value For X and Y" << endl;
	cin >> x;
	cin >> y;
	try
	{
		if (x < 30)
			throw "x exception";
		if (y == 0)
			throw (500);
		cout << x / y << endl;        //a runtime exeption may happen intger division by zero
	}
	/*catch (exception e)
	{
		cout << e.what() << endl;
		cout << "please review your input" << endl;
	}*/
	/*catch (int e)
	{
		cout << "Division by zero exception" << endl;
		cout << "Y kmust be other than 0" << endl;
	}

	catch (const char* msg)
	{
		cout << msg << endl;
		cout << "x must be greater than 30" << endl;
	}*/

	catch (...)    //General Catch BLOCK
	{
		cout << "Unhandeled Exception" << endl;
		cout << "contact system admin" << endl;
	}

	cout << "The program continued" << endl;
	cout << x + y + 100 << endl;

	return 0;
}
		
	


