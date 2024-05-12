#pragma once
class Distance
{
private:
	int feet;
	float inches;
public:
	Distance();
	Distance(int f , float i);
	void setDistance(int f, float i);
	void print();
	Distance add_distance(Distance d2);       // adding objects
	~Distance();
};

