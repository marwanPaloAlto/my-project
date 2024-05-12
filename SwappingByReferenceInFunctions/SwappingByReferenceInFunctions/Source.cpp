#include <iostream>
using namespace std;

void swap(int& x, int& y); // must include & to make them reference parameters to apply swap. 
int main()
{
	int i = 10, j = 60;


	swap(i, j);
	cout << " i becomes " << i << "\n";
	cout << " j becomes " << j << "\n";


}
void swap(int& x, int& y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;

}
