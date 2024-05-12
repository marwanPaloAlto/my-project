#include <iostream>
using namespace std;
float calc_average(float arr[], int size);
int main()
{
	float marks[5] = { 100,240,250,50,70 };
	cout << calc_average(marks, 5) << "\n";


}
float calc_average(float arr[], int size)
{
	float sum = 0.0;
	for (int i = 0; i < size; i++)
		sum += arr[i];
	return sum / size;


}