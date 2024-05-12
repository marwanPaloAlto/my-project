#include <iostream>
#include <string>
using namespace std;

struct employee
{
	int empo;
	string fname;
	string lname;
	float slalry;
	float bounus;
	float net_salary;
};

int main()
{
	employee e1, e2;
	e1.empo = 10;
	e1.fname = "ahmed";
	e1.lname = "ibrahim";
	e1.net_salary = 3000;
	e1.bounus = 500;
	e1.net_salary = e1.net_salary + e1.bounus; //Ê Âﬂ–« ·ﬂ· „ÊŸ› 

	// new datatype tailored by me
	e2 = e1;

	cout << e2.fname << " " << e2.lname << "\n";

	//compare with relational operators between data items NOT struct variables.
	//if ( e1.net_salary > e2.net_salary && e1.bounus > e2.bounus)
}
