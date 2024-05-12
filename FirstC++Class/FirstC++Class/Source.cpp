#include <iostream>
using namespace std;

class rectangle
{
private:
	float length;
	float width;

public:
	void setlength(float l)
	{
		if (l >= 0)
			length = l;
		else
			cout << " Error , please enter any positive values" << "\n";
	}

	float GetLength()
	{
		return length;
	}

	void setwidth(float l)
	{
		if (l >= 0)
			width = l;
		else
			cout << " Error , please enter any positive values" << "\n";
	}

	float Getwidth()
	{
		return width;
	}

	float getArea()
	{
		return length * width;
	}
};
int main()
{
	rectangle box;
	box.setlength(40.5);
	box.setwidth(30.6);
	cout << " The rectangle area is " << box.getArea() << "\n";





	return 0;


}