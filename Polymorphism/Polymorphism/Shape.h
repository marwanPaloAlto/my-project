#pragma once
#include <iostream>
#include <string>
using namespace std;
class Shape{
	string  color;
public:
	Shape(string c)
	{
		color = c;
	}
	virtual int area() = 0;                      // making the class abstract by puring the vitual method

	/*virtual int area()
	{
		cout << " Parent class area :" << endl;
		return 0;
	}  */


	virtual void draw() = 0;
	

	/*virtual void draw()
	{
		cout << " Draw Parent shape in " << color << " color " << endl;
	} */


	virtual void erase() = 0;

	/*virtual void erase()
	{
		cout << " Erase the Parent shape" << endl;
	}*/


	virtual void display() final
	{
		cout << "this is shape" << endl;
	}


};
class Rectangle : public Shape {
private:
	int length;
	int width;
public:
	Rectangle(int l, int w, string c) : Shape(c)
	{
		length = l;
		width = w;
	}

	int area()
	{
		cout << "Rectangle class area :" << (width * length) << endl;
		return (width * length);
	}
	void draw()
	{
		cout << "Draw Rectangle " << endl;
	}

	void erase()          // if not overrided there will be an error when calling this function.
	{
		cout << "The Rectangle Erased " << endl;
	}

	/*void display()          
	{                           // cannot override the base class final virtual function

		cout << "hghgh"
	}*/

};
class Circle : public Shape {
private:
	int radius;
public:
	Circle(int r, string c) :Shape(c) { radius = r; }

	int area() {
		cout << "Circle area :" << 3.14 * (radius * radius) << endl;
		return (3.14 * radius * radius);
	}

	void draw()
	{
		cout << "Draw circle " << endl;
	}

	void erase()
	{
		cout << "The Circle Erased " << endl;
	}
};

//Main fuction for the program
//void use_shape(Shape& sh_obj)
int main()
{
	//Shape s;  // error because an abstract class cannot give an object

	Shape* shap_ptr;
	Rectangle rec(10, 7, "Red");
	Circle c(5, "Yellow");
	shap_ptr = &rec;   // way to pointer to  object
	shap_ptr->area();   // way to call function
	shap_ptr->draw();


	shap_ptr = &c;   
	shap_ptr->area();     // same method diffrent call , that is polymorphism
	shap_ptr->draw();  //early binding or static binding or static linkage will happen if virtual not used
	                    
	return 0;
}

