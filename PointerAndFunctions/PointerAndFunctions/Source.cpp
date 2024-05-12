#include <iostream>
using namespace std;

void swap(double& x, double& y)
{
	double tmp = x;
	x = y;  // access variable by its allias name
	y = tmp;
}
void swap(double* ptr1, double* ptr2)
{
	double tmp = *ptr1;
	*ptr1 = *ptr2;   // de-refrencing pointer
	*ptr2 = tmp;
}

int main()
{
	double a = 3.0;
	double b = 5.0;
	swap(a, b);   // call by reference to variables a and b
	cout << a << b << endl;
	cout << "----------------" << endl;
	swap(&a, &b);   // call by pointer using addresses of a and b
	cout << a << b << endl;

	return 0;


}