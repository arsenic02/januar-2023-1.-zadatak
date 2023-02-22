#pragma once
#include <iostream>
#include "Karta.h"
using namespace std;
class DnevnaKarta:public Karta
{
protected:
	int jb;
	int r;//redni broj dana pocetka vazenja karte u odnosu na prvi dan skijaske sezone
	int brDanaVazenja;//br dana vazenja karte
	int osnovnaCena;
	int popust;
public:
	DnevnaKarta(int, int, int, int, int);
	int RacZbirniDnevniPopust()
	{
		int zbirniDnevniPop=(100 * popust + brDanaVazenja) * 0.02;
		return zbirniDnevniPop;
	}
	int cena()//mozda treba sa return
	{
		int cenaDkarte;//cena dnevne karte
		cenaDkarte = DnevnaKarta::RacZbirniDnevniPopust()*osnovnaCena;
		return cenaDkarte;
	}
	virtual  int getJb()
	{
		return jb;
	}
	void produzi(int jbr,int brDiliN)
	{
		brDanaVazenja += brDiliN;
	}
	virtual void prikaz(ostream& out)//virtual
	{
		out << " Jed. br. karte: " << jb << " Redni br. dana poc. vazenja: " << r << " Br. dana vazenja: " <<
			brDanaVazenja << " Osnovna cena: " << osnovnaCena << " Popust: " << popust << " %" << " ";
	}
	int getBrVazenja()
	{
		return brDanaVazenja;
	}
	 int getR()
	{
		return r;
	}
	~DnevnaKarta();
};

