#include "include/operazione_aritmetica.h"
#include "include/addizione.h"
#include "include/sottrazione.h"

void test_addizione() {
	Addizione a(4.5, 4.5);
	std::cout << a.eseguiCalcolo() << std::endl;
}


void test_sottrazione() {
	Sottrazione s(5.3, 4.5);
	std::cout << s.eseguiCalcolo() << std::endl;
}

int main() {
	test_addizione();
	test_sottrazione();
}