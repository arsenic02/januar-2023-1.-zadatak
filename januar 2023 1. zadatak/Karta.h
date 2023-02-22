#pragma once
#include <iostream>
using namespace std;
class Karta
{
protected:
public:
	virtual int cena() = 0;
	virtual void produzi(int jbr,int brDiliN) = 0;
	virtual int getJb() = 0;
	virtual void prikaz(ostream& out)//mora da ima telo da ne bi bilo problema sa linkovanjem
	{

	}
	virtual int getBrVazenja() = 0;
};

