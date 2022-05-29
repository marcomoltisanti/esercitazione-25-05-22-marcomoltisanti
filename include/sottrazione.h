#ifndef SOTTRAZIONE
#define SOTTRAZIONE
#include "operazione_aritmetica.h"

class Sottrazione : public OperazioneAritmetica {
	public:
	Sottrazione(double sx, double dx) : OperazioneAritmetica(sx, dx) {}
	double eseguiCalcolo() {
		return opSinistro - opDestro;
	}
};
#endif
