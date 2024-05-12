#include <iostream>
using namespace std;

int main()
{
	int list1[5] = { 10,20,30,40,50 };
	int list2[5];

	for (int i = 0; i < 5; i++)
		list2[i] = list1[i];

	cout << list2[3] << "\n";

}
