#include "Calculator.h"

int Calculator::add(int num1, int num2)
{
    return num1 + num2;
}

int Calculator::add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;

}

float Calculator::add(float num1, float num2)
{
    return num1 + num2;

}

string Calculator::add(string a, string b)
{
    return a + " " + b;
}

int Calculator::multiply(int num1, int num2)
{
    return num1 * num2;
}

int Calculator::subtract(int num1, int num2)
{
    return num1 - num2;
}

Calculator::Calculator()
{

};
Calculator::~Calculator()
{

};
