#include <iostream>
#include <string>
using namespace std;

struct distance_type
{
	int feet;
	float inches;
};

distance_type add_distances(distance_type d1, distance_type d2);
int main()
{
	distance_type x, y, z;
	cout << " Enter Feet and Inches for the 1st distance\n";
	cin >> x.feet >> x.inches;

	cout << " Enter Feet and Inches for the 2nd distance\n";
	cin >> y.feet >> y.inches;

	z = add_distances(x, y);
	cout << z.feet << "   " << z.inches << "\n";


}
distance_type add_distances(distance_type d1, distance_type d2)
{
	distance_type result;

	result.feet = d1.feet + d2.feet;
	result.inches = d1.inches + d2.inches;

	return result;
}
