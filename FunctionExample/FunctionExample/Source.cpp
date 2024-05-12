#include <iostream>
using namespace std;
#include <cmath>

float area(int radious);
float volume(int radious);
const float pi = 3.14;

int main()
{
	int r;
	cout << " please enter the sphere radious \n";
	cin >> r;
	cout << "the sphere area is " << area(r) << "\n";
	cout << "the sphere volume is " << volume(r) << "\n";
}

float area(int radious)
{

	return 4 * pi * radious * radious;
}

float volume(int radious)
{

	return 4 / 3 * pi * radious * radious * radious;
}