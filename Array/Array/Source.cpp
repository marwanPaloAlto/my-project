#include <iostream>
using namespace std;

int main()
{
	int list[10];
	list[3] = 30;
	list[4] = 20;
	list[5] = list[3] + list[4];
	list[4] = 29;

	cout << list[5] << "\n";
}
