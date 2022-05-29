#ifndef OP_ARITMETICA
#define OP_ARITMETICA
#include <iostream>

class OperazioneAritmetica {
	protected:
	double opSinistro = 0;
	double opDestro= 0;
	
	public:
	
	OperazioneAritmetica(double sx, double dx) : opSinistro(sx), opDestro(dx) {}
	virtual double eseguiCalcolo() = 0;
};
#endif
