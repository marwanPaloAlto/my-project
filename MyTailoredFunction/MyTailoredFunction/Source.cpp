#include <iostream>
using namespace std;
#include <cmath>
 
int larger(int num1, int num2); // parameters names are unecessary 
                                // (int , int)  �� ����

int main()
{
	int n1, n2;
	
	 cout << "Enter Two Numbers \n";  // �� ��� ���� �� ����� �� ���� �� �������� ������ � ����� �� ���� � ������ �� ���� ����� ��� ������
	
	 cin >> n1 >> n2;
	
	cout << "The Larger is " << larger(n1, n2) << "\n";
	/*this is one of three types of returning result , 
	i may store the result in a variable as int result = larger (n1, n2) ;
	i may use the result in an aryhmetic expression as int result = larger (n1, n2) +25;
	*/
}
	  int larger (int num1, int num2)
{
	int max; // ���� ���� �� �������� � ������ ������ ���� � ���� ������ ����� �� ���� �����
	if (num1 > num2)
		max = num1; //  ����� return num1;
	else
		max = num2; // ����� return num2;

	return max;
}
