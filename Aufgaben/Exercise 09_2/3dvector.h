/* Mastervorlage Gueltig ab: 2011-07-30 */

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 09_2 */

typedef struct vector3d {
	int x;
	int y;
	int z;
} v3d;

v3d add(v3d a, v3d b);
v3d subtract(v3d a, v3d b);
double length(v3d v);
double dot(v3d a, v3d b);
// Eigene Methode zum Testen der anderen.
void print_v3d(v3d v);