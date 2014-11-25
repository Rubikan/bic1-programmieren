/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 08_1 */ 

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include "geometry.h"

int main(int argc, char* argv[]) {
	double a = 5;
	double b = 10;
	double c = 15;

	printf("Das Volumen eines Wuerfels mit Kantenlaenge %.2f = %.2f.\n", a, volume_cube(a));
	printf("Das Volumen eines Quaders mit a = %.2f, b = %.2f und c = %.2f ist %.2f.\n", a, b, c, volume_cuboid(a, b, c));
	printf("Die Oberflaeche eines Quaders mit a = %.2f, b = %.2f und c = %.2f ist %.2f.\n", a, b, c, surface_cuboid(a, b, c));
	printf("Die Zahl PI = %f\n", PI);

	return 0;
}