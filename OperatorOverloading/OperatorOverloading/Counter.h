#pragma once
class Counter
{                     // it seems we may make a class as our first c++ class in the same file even in header
private:
	unsigned int count; //count

public:
	Counter() : count(0) //constructor
	{}

	Counter(int c) : count(c) //constructor
	{}
	int get_count() //return count
	{
		return count;
	}
	Counter operator ++()          //unary operator
	{
		++count;
		return Counter(count);

	}
	Counter operator ++(int)          //unary operator
	{
		count++;                   
		return Counter(count);

	}

	Counter operator --()    //unary operator
	{
		--count;
		return Counter(count);

	}
	Counter operator --(int)          //unary operator
	{
		count--;
		return Counter(count);

	}
};

