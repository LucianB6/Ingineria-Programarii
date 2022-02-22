#include "string.h"
#include "cos.h"
#include "produs.h"
int main() {
	Cos c = Cos();

	Produs p1 = Produs(123, "paine", 20, 3);
	Produs p2 = Produs(111, "lapte", 10, 3);

	c.add(p1);
	c.add(p2);
	
}