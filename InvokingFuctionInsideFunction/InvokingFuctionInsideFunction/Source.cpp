#include <iostream>
using namespace std;
#include <cmath>

int sum(int, int, int);
float average(int, int, int);

int main()
{
	int x, y, z;
	cout << "enter three numbers \n";
	cin >> x >> y >> z;
	cout << "sum is " << sum(x, y, z) << "\n";
	cout << "average is " << average(x, y, z) << "\n";

}

int sum(int n1, int n2, int n3)
{

	return n1 + n2 + n3;
}
float average(int n1, int n2, int n3)
{
	return sum(n1, n2, n3) / 3;
}