#include <iostream>
using namespace std;
int main()
{
	//input from the user
	int width, length, area;
	cout << "please enter rectangle width \n";   /* it is possible also:
	                                           cout << "please enter rectangle width and length  \n";
	                                              cin >> width >> length;*/
	cin >> width;
	cout << "please enter rectangle length \n";
	cin >> length;
	 
	//processing
	area = width * length; 

	//output
	cout <<"the area of rectangle equal "<< area<<"\n";  /* area variable unnessecary , not used again 
														   instead : cout << width * length ; */

	return 0;
}