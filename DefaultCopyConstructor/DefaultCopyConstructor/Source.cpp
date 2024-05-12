#include<iostream>
#include "Distance.h"
int main()
{
	/*                                 
	Distance d1;
	Distance d2(5, 3.5);
	Distance d3(d2);
	d3.print();
	d3.setDistance(7, 4.25);
	Distance d4 = d3;
	d4.print();
	*/

	Distance obj1(5, 3.5);    //adding objects  by passing them to methods
	Distance obj2(7, 4.25);
	Distance d3 = obj1.add_distance(obj2);
	d3.print ();




}