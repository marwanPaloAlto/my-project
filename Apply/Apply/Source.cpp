#include <iostream>
#include <string>
using namespace std; 
                                      //FULLY MASTERED AND UNDERSTOOD;
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
void set_bonus(employee &e, float percent);
void print(employee arr[], int size);

int main()
{
	
	employee emps[5];
	get_data(emps, 5);
	set_bonus(emps [1], 0.10f );
	print(emps, 5);








}
void get_data(employee arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " Enter emplo no , employee name , job for employee " << i + 1 << "\n";
		cin >> arr[i].eno >> arr[i].ename >> arr[i].job;
		arr[i].bonus = 0;
		arr[i].total_salary = 0.0f;
		if (arr[i].job == "manager")
			arr[i].salary = 5000;
		else if
			(arr[i].job == "engineer")
			arr[i].salary = 3000;
		else if
			(arr[i].job == "clerk")
			arr[i].salary = 2000;
		else
			arr[i].salary = 1000;

	}
}

void set_bonus(employee &e, float percent)
	
{
		e.bonus = e.salary * percent;

	}
	

void print(employee arr[], int size)
{
	for (int i = 0; i < size; i++)
	{
		cout << " Emp No = " << arr[i].eno << "\n";
		cout << " Emp Name = " << arr[i].ename << "\n";
		cout << " Emp job = " << arr[i].job << "\n";
		cout << " Emp Salary = " << arr[i].salary << "\n";
		cout << " Emp Bonus = " << arr[i].bonus << "\n";
		cout << " Emp Toatal Salary = " << arr[i].salary+arr[i].bonus << "\n";
		cout << "***************************************" << "\n";


	}

}
