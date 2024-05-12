#include <iostream>
using namespace std;


int main()
{

	char msg[] = "Hello";
	char* ptr;
	ptr = msg;
	*ptr = 'M';
	ptr++;
	*ptr = 'A';
	ptr += 2;
	*ptr = 'k';
	cout << msg << endl;
	return 0;
}