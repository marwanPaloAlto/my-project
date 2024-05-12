#include <iostream>
#include <string>
using namespace std;

struct employee
{
	int eno;
	string ename;
	string job;
	float salary;
	float bonus;
	float total_salary;
};


void get_data(employee arr[], int size);
void set_bonus(employee& e, float percent);
void print(employee arr[], int size);

int main()
{

	employee emps[5];   // array whose items are of datatype employee ( struct ).

	get_data(emps, 5);

	set_bonus(emps[1], 0.10f); // f means that datatype = flouat .

	print(emps, 5);

}

void set_bonus(employee& e, float percent)
{
	e.bonus = e.salary * percent;

}

void print(employee arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << "Emp No = " << arr[i].eno << "\n";
		cout << "Emp Name = " << arr[i].ename << "\n";
		cout << "Emp job = " << arr[i].job << "\n";
		cout << "salary No = " << arr[i].salary << "\n";
		cout << "Emp bonus = " << arr[i].bonus << "\n";
		cout << "Emp total salary = " << arr[i].salary + arr[i].bonus << "\n";
		cout << "******************************** \n";





	}

}


void get_data(employee arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " enter empl no , employee name , job For Employee " << i + 1 << "\n";
		//cout << " enter empl no , employee name , job \n";
		cin >> arr[i].eno >> arr[i].ename >> arr[i].job;
		arr[i].bonus = 0;
		arr[i].total_salary = 0.0f;
		if (arr[i].job == "Manager")
			arr[i].salary = 5000;
		else if (arr[i].job == "Engineer")
			arr[i].salary = 3000;
		else if (arr[i].job == "Clerk")
			arr[i].salary = 2000;
		else
			arr[i].salary = 1000;   //œ·Êﬁ Ì «” ﬁ»·  »Ì«‰«  «·„ÊŸ›  Ê Õ”» ·Â ﬁÌ„… «·—« »


	}






}