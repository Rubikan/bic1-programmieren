/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 09_2 */

#include <math.h>
#include <stdio.h>
#include "3dvector.h"

v3d add(v3d a, v3d b) {
	v3d result;

	result.x = a.x + b.x;
	result.y = a.y + b.y;
	result.z = a.z + b.z;

	return result;
}

v3d subtract(v3d a, v3d b) {
	v3d result;

	result.x = a.x - b.x;
	result.y = a.y - b.y;
	result.z = a.z - b.z;

	return result;
}

double length(v3d v) {
	double result;

	result = sqrt(pow(v.x, 2) + pow(v.y, 2) + pow(v.z, 2));

	return result;
}

double dot(v3d a, v3d b) {
	double result;

	result = (a.x * b.x) + (a.y * b.y) + (a.z * b.z);

	return result;
}

// Eigene Methode zum Testen der anderen.

void print_v3d(v3d v) {
	printf("(%d %d %d)\n", v.x, v.y, v.z);
}