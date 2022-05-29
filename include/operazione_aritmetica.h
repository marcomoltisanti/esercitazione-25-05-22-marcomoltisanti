#ifndef OP_ARITMETICA
#define OP_ARITMETICA
#include <iostream>

class OperazioneAritmetica {
	protected:
	double opSinistro = 0;
	double opDestro= 0;
	char symbol = ' ';
	public:
	
	OperazioneAritmetica(double sx=0.0, double dx=0.0) : opSinistro(sx), opDestro(dx) {}
	void setOpSinistro(double sx) {
		this->opSinistro = sx;
	}
	void setOpDestro(double dx) {
		this->opDestro = dx;
	}
	virtual double eseguiCalcolo() = 0;
	friend std::ostream operator<<(std::ostream& out, const OperazioneAritmetica& op) {
		out << op.opSinistro << " " << op.symbol << " " << op.opDestro;
		return out;
	}
};
#endif
