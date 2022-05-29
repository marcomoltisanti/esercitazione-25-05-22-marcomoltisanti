#include "include/operazione_aritmetica.h"
#include "include/addizione.h"

void test_addizione() {
	Addizione a(4.5, 4.5);
	std::cout << a.eseguiCalcolo() << std::endl;
}

int main() {
	test_addizione();
}
