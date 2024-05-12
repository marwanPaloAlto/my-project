#include <iostream>
using namespace std;
#include <cmath>
 
int larger(int num1, int num2); // parameters names are unecessary 
                                // (int , int)  ÕÍ ÈÑÏæ

int main()
{
	int n1, n2;
	
	 cout << "Enter Two Numbers \n";  // ãÔ ÔÑØ íßæä İí ÇÓãÇÁ İí ÍÇáÉ ãÔ åÇÎÏÎããä ÇáíæÒÑ æ åÍØåã ãä ÚäÏí æ ÓÇÚÊåÇ ãÔ åÚÑÖ ÑÓÇáÉ æáÇ ÇÓÊŞÈá
	
	 cin >> n1 >> n2;
	
	cout << "The Larger is " << larger(n1, n2) << "\n";
	/*this is one of three types of returning result , 
	i may store the result in a variable as int result = larger (n1, n2) ;
	i may use the result in an aryhmetic expression as int result = larger (n1, n2) +25;
	*/
}
	  int larger (int num1, int num2)
{
	int max; // ããßä äæİÑ İí ÇáãíãæÑí æ ãäÚÑİÔ ÇáãÇßÓ ÇÕáÇ æ äØÈÚ ÇáÇßÈÑ ÚáØæá áæ ÊÍŞŞ ÇáÔÑØ
	if (num1 > num2)
		max = num1; //  ÚáØæá return num1;
	else
		max = num2; // ÚáØæá return num2;

	return max;
}
