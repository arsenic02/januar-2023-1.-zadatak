#pragma once
#include "DnevnaKarta.h"
class DnevnoNocnaKarta:public DnevnaKarta
{
private:
	int osnovnaCenaNocne;//...karte
	int brojNoci;
public:
	DnevnoNocnaKarta(int, int, int, int, int, int, int);
	int racZbirniNocniPop()//...popust
	{
		int zbirniNocniPop = (100 * popust + brojNoci) * 0.02;
		return zbirniNocniPop;
	}
	//fja broj noci=br dana ili za 1 manji
	int cena()//mozda treba sa return
	{
		int cenaNkarte;
		cenaNkarte = DnevnoNocnaKarta::racZbirniNocniPop() * osnovnaCenaNocne;
		return cenaNkarte;
	}
	void produzi(int jbr, int brDiliN)
	{
		brojNoci += brDiliN;
	}
	void prikaz(ostream& out)
	{
		out << " Osnovna cena nocne: " << osnovnaCenaNocne << " Broj noci: " << brojNoci;
		DnevnaKarta::prikaz(out);
	}
	~DnevnoNocnaKarta();

	int getBrVazenja()
	{
		return brojNoci;
	}

	
};

