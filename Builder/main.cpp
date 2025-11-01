#include "builder.h"


int main() {


	MargheritaBuilder* margherita = new MargheritaBuilder();
	Cook cook;
	cook.makePizza(margherita);
	Pizza* pizza1 = margherita->getPizza();
	pizza1->show();

	delete margherita;
	delete pizza1;
}