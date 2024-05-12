#include<string>
#include <iostream>
using namespace std;
                                   // close the class to not cowde the editor
class Employee                         
{
private:
	string name;
	string job;
	float salary;
public:
	Employee() : name("unknown"), job("unkown"), salary(0.0)
	{}
	Employee(string n, string j, float s)
	{
		name = n;
		job = j;
		salary = s;
	}

	void set_salary(float s)
	{
		salary = s;
	}
	void set_name(string n)
	{
		name = n;
	}
	float get_salary()
	{
		return salary;
	}
	void display()
	{
		cout << "Name =" << name << " ,Job =" << job << " ,Salary =" << salary << endl;
	}

};                    
class Student
{
private:
	string name;
	string department;
	string research_interest;

public:
	Student(string d, string ra) :department(d), research_interest(ra)
	{

	}
	void set_name(string n)
	{
		name = n;
	}
	void set_department(string d)
	{
		department = d;
	}

	void set_research_interest(string d)
	{
		department = d;
	}
	void display()
	{
		cout << "Department =" << department << " ,research interest =" << research_interest << endl;
	}
};

class TeachingAssistant : public Student, public Employee
{                                                            // all attributes are inherited
public:                                                                  //Reusability              
	TeachingAssistant(string n, string j, float s, string d, string ra) :Employee(n, j, s),Student(d, ra)

    {

    }
	void display()
	{
		Employee::display();
		Student::display();
	}
};
void main()
{
	TeachingAssistant ta("Ahmed", "TA", 5000, "IS", "DataBases");
	ta.set_salary(7000);
	ta.set_research_interest("Data science");
	ta.Employee::set_name("Mohamed");                // when the same fuction is present in two classes
	ta.Student::set_name("Mohamed");                   // we write the full method
	ta.Employee::display();
	ta.Student::display();
	ta.TeachingAssistant::display();    //since all attributes are inherited 
	                                     // therefore the display contains the two bse classes display functions
	                                       // and that will be the sub class display function.

}