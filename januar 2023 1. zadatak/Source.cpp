//spisak je zapravo prikaz
//fja broj noci=br dana ili za 1 manji to u DnevnoNocnaKarta da se uradi
#include "Kolekcija.h"
void main()
{
	Kolekcija* k = new Kolekcija(6);
	Karta* k1 = new DnevnaKarta(123, rand() % 10, 3, rand() % 10, rand() % 10);
	k->dodaj(k1);
	Karta* k2= new DnevnaKarta(11, 10, 9, 8, 7);
	k->dodaj(k2);
	Karta* k3 = new DnevnaKarta(rand() % 10, rand() % 10, 2, rand() % 10, rand() % 10);
	k->dodaj(k3);
	Karta* k4= new DnevnoNocnaKarta(567, rand() % 10, 5, rand() % 10, rand() % 10,rand()%10,5);//produzi se na 5+2
	k->dodaj(k4);
	Karta* k5= new DnevnoNocnaKarta(rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, 6);
	k->dodaj(k5);
	Karta* k6= new DnevnoNocnaKarta(rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, rand() % 10, 7);
	k->dodaj(k6);

	k->izbrisi(123);
	k->ProduziVazenje(567,2);
	cout << "Prikaz spiska karata: " << endl;
	k->prikaz(cout);
	Karta* krt = k->vrniNajduze();
	cout << endl << " -----------------------------------------------"<<endl;
	cout << " Karta sa najduzim trajanjem je: " << endl;;
	krt->prikaz(cout); cout << endl;
	
	cout << "Karta sa najkracim trajanjem je: " << endl;
	Karta* krt2 = k->vrniNajkrace();
	krt2->prikaz(cout); cout << endl;

	//broj vazecih karata nisam izracunao
	cout << "Ukupna zarada je: " << k->RacUkZarada();
}