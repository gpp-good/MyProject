
#include "pch.h"
#include <iostream>

class IntNum
{
public:
	IntNum(int x = 0);
	IntNum(const IntNum & n);
	IntNum(IntNum && n);
	~IntNum();
	int getInt()
	{
		return *xptr;
	}
private:
	int * xptr;
};

IntNum::IntNum(int x)
{
	xptr = new int(x);
	std::cout << "Caling constructor..." << std::endl;
}

IntNum::IntNum(const IntNum & n)
{
	xptr = new int(*n.xptr);
	std::cout << "Caling conpy constructor..." << std::endl;
}

IntNum::IntNum(IntNum && n)
{
	xptr = n.xptr;
	n.xptr = nullptr;
	std::cout << "Caling move constructor..." << std::endl;
}

IntNum::~IntNum()
{
	delete xptr;
	std::cout << "Delete..." << std::endl;

}
IntNum getNum()
{
	IntNum a;
	return a;
}
int main()
{
    std::cout << "Hello World!\n"; 
	std::cout << getNum().getInt() << std::endl;

}


