#ifndef DIVISIONE
#define DIVISIONE
#include "operazione_aritmetica.h"

class Divisione : public OperazioneAritmetica {
	public:
	Divisione() : OperazioneAritmetica() {}
	Divisione(double sx, double dx) : OperazioneAritmetica(sx, dx) {}
	double eseguiCalcolo() {
		return opSinistro / opDestro;
	}
};
#endif
