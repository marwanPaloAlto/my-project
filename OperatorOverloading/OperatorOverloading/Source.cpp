#include<iostream>
#include<string>
#include"Counter.h"
using namespace std;
int main()
{
	/*int i = 5, j = 10;
	cout << i + j << endl;

	string a = "Hello";
	string b = "World";
	cout << a + b << endl;*/

	Counter c1(5);        //unary operator
	Counter c2(10);
	Counter c3 = c1++;
	cout << c3.get_count() << endl;
	Counter c4 = --c2;

	cout << c4.get_count() << endl;

	
}