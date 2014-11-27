/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Andreas Rubik */
/* 1410258038 */
/* 09_1 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include "3dvector.h"

int main(int argc, char* argv[]) {
	v3d vec1 = {2, 4, 8};
	v3d vec2 = {4, 8, 16};
	v3d added;
	v3d subtracted;

	printf("Addition {2 4 8} + {4 8 16} = ");
	print_v3d(add(vec1, vec2));
	printf("Subtraktion {4 8 16} - {2 4 8} = ");
	print_v3d(subtract(vec2, vec1));
	printf("Die Laenge des Vektors (4 8 16) ist %.5f\n", length(vec2));
	printf("Das Skalarprodukt der Vektoren (2 4 8) und (4 8 16) ist %.2f\n", dot(vec1, vec2));

	return 0;
}