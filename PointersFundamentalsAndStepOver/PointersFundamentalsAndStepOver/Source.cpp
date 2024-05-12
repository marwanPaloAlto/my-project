#include <iostream>
using namespace std;

int main()
{
	int x;
	x = 12;
	int* ptr;
	ptr = &x;
	cout << ptr << endl;
	cout << *ptr << endl;
	*ptr += 10;
	cout << x << endl;
	cout << *ptr << endl;


	return 0;
}