/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
int main(int argc, char* argv[]) {
	char string1[5] = "Test";
	char string2[5];

	string2[0] = 'T';
	string2[1] = 'e';
	string2[2] = 's';
	string2[3] = 't';
	printf("String 1: %s\n", string1);
	printf("String 2: %s\n", string2);

	return 0;
}