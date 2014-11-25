/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 08_1 */

#include "geometry.h"
#define SURFACE_CUBOID (2*(length*width+width*height+height*length))

/* Private functions */

static double area_rectangle(double length, double width) {
	static unsigned int function_calls = 0;

	function_calls++;
	printf("Die interne Funktion zur Flaechenberechnung wird jetzt zum %dten mal aufgerufen.\n", function_calls);

	return length*width;
}

/* Public variables */

extern const double PI = 3.14159265359;

/* Public functions */

extern double surface_cuboid(double length, double width, double height) {
	return SURFACE_CUBOID;
}

extern double volume_cuboid(double length, double width, double height) {
	return area_rectangle(length, width) * height;
}

extern double volume_cube(double length) {
	return area_rectangle(length, length) * length;
}