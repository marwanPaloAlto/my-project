#include <iostream>
using namespace std;
class Employee
{
protected:
	string name;
	int emp_ID;
	float salary;
public:
	Employee():name("unknown"),emp_ID(0),salary(0.0)             // Constructor overloading
	{




	}
	Employee(string n, int id, float s)
	{
		name = n;
		emp_ID = id;
		salary = s;
	}
	virtual float get_total_salary() = 0;
	virtual void print()
	{
		cout << "Nmae = " << name << "Emp-Id =" << emp_ID << " Bsic salary " << salary << endl;
	}
};
class Sales :public Employee
{
private:
	float gross_sales;
	float commission_rate;
public:
	Sales(string n, int id, float s, float gs, float cr) :Employee(n, id, s)
	{
		gross_sales = gs;
		commission_rate = cr;
	}

	float get_total_salary()
	{
		return salary + (gross_sales * commission_rate); //the fist implementation for base class taken pure function
	}

	void print()
	{
		Employee::print();    //reusability + we will print two more attributes 
		cout << "Gross Sales = " << gross_sales << " commission =" << commission_rate << endl;
	}
};

class Engineer :public Employee
{
private:
	string speciality;
	int experience;
	int overtime_hours;
	float overtime_hour_rate;
public:
	Engineer(string n, int id, float s, string sp, int e, int oh, float ohr) :
		Employee(n, id, s)
	{
		speciality = sp;
		experience = e;
		overtime_hours = oh;
		overtime_hour_rate = ohr;
	}
	float get_total_salary()             //override
	{
		return salary + (overtime_hours * overtime_hour_rate);
	}

	void print()
	{
		Employee::print();
		cout << "Speciality = " << speciality << " experience =" << experience << endl;
	}
};                                      // class hierarechy done completely

int main()
{                                                  //Polymorphism
	Employee* emp_ptr;                                        //using pointer to remember polymorphism
	Sales s1("Ahmed", 120, 5000, 50000, 0.10);
	Engineer e1("Hassan", 150, 47000, "SW Engineer", 5, 10, 50);

	emp_ptr = &s1;
	emp_ptr->get_total_salary();
	emp_ptr->print();

	emp_ptr = &e1;
	emp_ptr->get_total_salary();
	emp_ptr->print();

	return 0;
}