#include <iostream>
using namespace std;
void printmatrix(int arr[][3], int rows);
int main()
{
	int matrix[5][3];

	for (int row = 0; row < 5; row++)
		for (int col = 0; col < 3; col++)
		{
			cout << " Enter value of item " << row << "," << col << "\n";
			cin >> matrix[row][col];
		}
	printmatrix(matrix, 5);
	int sum = 0;
	for (int row = 0; row < 5; row++)
		for (int col = 0; col < 3; col++)
		{
			sum += matrix[row][col];
		}
	int sumdiagonal = 0;
	for (int row = 0; row < 5; row++)
		for (int col = 0; col < 3; col++)
		{
			if (row == col)

				sumdiagonal += matrix[row][col];
		}
	cout << " the sum of all amtrix items is " << sum << "\n";
	cout << " the sum of all diagonal items is " << sumdiagonal << "\n";

}

void printmatrix(int arr[][3], int rows)
{
	for (int row = 0; row < rows; row++)
	{

		for (int col = 0; col < 3; col++)
		{
			cout << arr[row][col] << "\t";
		}
		cout << "\n";
	}
}