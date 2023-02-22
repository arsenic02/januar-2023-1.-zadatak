#include "Kolekcija.h"

Kolekcija::Kolekcija(int u)
{
	tren = 0;
	ukupno = u;
	karte = new Karta * [ukupno];
}
void Kolekcija :: dodaj(Karta* k)
{
	if (tren < ukupno)
		karte[tren++] = k;
}
void Kolekcija :: izbrisi(int j)//brise na osnovu jed. broja
{
	int i = 0;
	while (i < tren && karte[i]->getJb() != j)//
		i++;
	delete karte[i];
	for (int j = i; j < tren - 1; j++)
		karte[j] = karte[j + 1];
	tren--;
}
void Kolekcija::ProduziVazenje(int jbr, int brDiliN)
{

	int i = 0;
	while (i < tren && karte[i]->getJb() != jbr)//karte[i]->produzi(jbr, brDiliN))
		i++;
	if (karte[i]->getJb() != tren)
		karte[i]->produzi(jbr, brDiliN);
}
void Kolekcija::prikaz(ostream& out)//spisak svih prodatih karata tj. prikaz
{
	for (int i = 0; i < tren; i++)
	{
		karte[i]->prikaz(out);
		cout << endl;
	}
		
}



int Kolekcija::vrniBrojVazK(int R, char izaberi[4])//vrni broj vazecih karata,izaberi dan ili noc
{
	//problem atributi iz drugih klasa ne moze im se pristupiti
	//if (r == R)
	
	if (strcmp(izaberi, "dan") == 0)
	{
		return tren;//nisam siguran
		//za dan prebroji karte koje su prodate za dan
		//za nocne prebrojati dnevno nocne karte
	}
	else
	{
		if (strcmp(izaberi, "noc") == 0)
		{

		}
		//ako je nesto neregularno uneseno do while petlja za unos u main
	}
}

int Kolekcija::RacUkZarada()
{
	int ukZarada = 0;
	for (int i = 0; i < tren; i++)
	{
		ukZarada += karte[i]->cena();
	}
	return ukZarada;
}

Karta* Kolekcija::vrniNajkrace()
{
	int min = 0;
	for (int i = 1; i < tren; i++)
		if (karte[i]->getBrVazenja() < karte[min]->getBrVazenja())//raddi
			min = i;
	return karte[min];
}

Karta* Kolekcija::vrniNajduze()//radi
{
	int max = 0;
	for (int i = 1; i < tren; i++)
		if (karte[max]->getBrVazenja() < karte[i]->getBrVazenja())
			max = i;;
	return karte[max];
}