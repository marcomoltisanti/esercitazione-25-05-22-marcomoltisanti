#ifndef MOLTIPLICAZIONE
#define MOLTIPLICAZIONE
#include "operazione_aritmetica.h"

class Moltiplicazione : public OperazioneAritmetica {
	public:
	Moltiplicazione(double sx, double dx) : OperazioneAritmetica(sx, dx) {}
	double eseguiCalcolo() {
		return opSinistro * opDestro;
	}
};
#endif
