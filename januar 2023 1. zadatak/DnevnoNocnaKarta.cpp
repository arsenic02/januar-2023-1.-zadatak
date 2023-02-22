#include "DnevnoNocnaKarta.h"
DnevnoNocnaKarta::DnevnoNocnaKarta(int j, int R, int b, int o, int p, int ocn, int brN) : DnevnaKarta(j, R, b, o, p)
{
	osnovnaCenaNocne = ocn;
	brojNoci = brN;
}