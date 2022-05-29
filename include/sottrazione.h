#ifndef SOTTRAZIONE
#define SOTTRAZIONE
#include "operazione_aritmetica.h"

class Sottrazione : public OperazioneAritmetica {
	public:
	Sottrazione() : OperazioneAritmetica() {
		this->symbol = '-';
	}
	Sottrazione(double sx, double dx) : OperazioneAritmetica(sx, dx) {
		this->symbol = '-';
	}
	double eseguiCalcolo() {
		return opSinistro - opDestro;
	}
};
#endif
