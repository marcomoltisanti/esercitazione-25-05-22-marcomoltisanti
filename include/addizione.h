#ifndef ADDIZIONE
#define ADDIZIONE
#include "operazione_aritmetica.h"

class Addizione : public OperazioneAritmetica {
	public:
	Addizione(double sx, double dx) : OperazioneAritmetica(sx, dx) {}
	double eseguiCalcolo() {
		return opSinistro + opDestro;
	}
};
#endif
