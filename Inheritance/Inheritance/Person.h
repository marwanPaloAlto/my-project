#pragma once
#include<iostream>
#include <string>
using namespace std;
class Person
{
private:
	string name;
	string gender;
	float age;

public:
	Person()
	{
		name = "unknown";
		gender = "unkown";
		age = 0;
}
	Person(string n, string g, float a)
	{
		name = n;
		gender = g;
		age = a;
	}
	void set_age(float a)
	{
		age = a;
	}
	float get_age()
	{
		return age;
	}
	void set_name(string n)
	{
		name = n;
	}
	string get_name()
	{
		return name;
	}
	void set_gender(string g)
	{
		gender = g;
	}
	string get_gender()
	{
		return gender;
	}
	void display()
	{
		cout << "The person basic data \n";
		cout << name << " " << gender << " " << age << endl;
	}
};

