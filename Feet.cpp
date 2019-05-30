// ConsoleApplication1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CFeet
{
private:
	int feet;
	int  inches;
public:
	CFeet();
	CFeet(int f, int i);
	int setFeet(int f, int i);
	void displayFeet();
	int check();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
CFeet::CFeet(int f,int i)
{
	feet = f;
	inches = i;
	if (check() == 1)
	{
		cout << feet << "feet" << inches << "inches" << endl;
	}
}
int CFeet::setFeet(int f, int i)
{
	feet = f;
	inches = i;
	if (check() == 1)
	{
		cout << feet << "feet" << inches << "inches" << endl;
	}
	return 0;
}
void CFeet::displayFeet()
{
	cout << feet << "feet" << inches << "inches" << endl;
}
int CFeet::check()
{
	if (inches >= 12)
	{
		while (inches / 12 > 0)
		{
			feet++;
			inches -= 12;
		}
		return 1;
	}
	return 0;
}


int main()
{
	CFeet od;
	od.setFeet(2,62);
	od.displayFeet();
    return 0;
}

