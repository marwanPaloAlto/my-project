#include <iostream>
using namespace std;
bool find_item(int arr[], int size, int searcheditem);
int main()
{
	int x;
	int items[5] = { 10,20,30,40,50 };
	cout << " enter item to search for \n";
	cin >> x;
	if (find_item(items, 5, x) == true)
		cout << "item found \n";
	else
		cout << " item not found \n";


}
bool find_item(int arr[], int size, int searcheditem)
{
	bool found = false;
	for (int i = 0; i < size; i++)
		if (arr[i] == searcheditem)
			found = true;

	return found;

}