#pragma once
#include "DnevnaKarta.h"
#include "DnevnoNocnaKarta.h"
#include <string.h>
class Kolekcija
{
private:
	Karta** karte;
	int tren;
	int ukupno;
public:
	Kolekcija(int u);
	int getJedBr()
	{
		//int jbr = jb;
		//return DnevnaKarta::getJb();

	}
	void dodaj(Karta* k);
	
	void izbrisi(int j);//brise na osnovu jed. broja
	
	void ProduziVazenje(int jbr, int brDiliN);
	
	void prikaz(ostream& out);//spisak svih prodatih karata tj. prikaz
	
	Karta* vrniNajkrace();//trajanje
	
	Karta* vrniNajduze();//trajanje
	
	int vrniBrojVazK(int R, char izaberi[4]);
	
	int RacUkZarada();

	int getR();

	friend int fja(Kolekcija& k, DnevnaKarta& d);//ne moze da se koristi jer ne moze da pristupa privatnim clanovima klase
};

