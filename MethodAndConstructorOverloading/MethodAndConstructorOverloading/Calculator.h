#pragma once
#include <string>
using namespace std;
class Calculator
{
public:
	static int add(int num1, int num2);
	int add(int num1, int num2, int num3);
	float add(float num1, float num2);
	string add(string a, string b);

	//Static Methods 

	static int multiply(int num1, int num2);
	static int subtract (int num1, int num2);



	Calculator();
	~Calculator();
};

