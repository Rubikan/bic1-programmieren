/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS

/* Programmcode hier einfügen */
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
/* Deklaration der Funktionsprototypen */

int main(int argc, char* argv[]) {
	time_t t;
	srand((unsigned)time(&t));
	int random = rand() % 50;
	int user = -1;

	while (random != user) {
		printf("Bitte geben sie eine Zahl zwischen 0 und 50 ein. \n");
		scanf("%d", &user);

		if (random == user) 
			printf("RICHTIG!\n");
		else if (random > user) {
			if ((random - user) < 5)
				printf("Die gesuchte Zahl ist groesser! NAHE DRAN!\n");
			else if ((random - user) < 10)
				printf("Die gesuchte Zahl ist groesser! RICHTIGE RICHTUNG!\n");
			else if ((random - user) < 25)
				printf("Die gesuchte Zahl ist groesser! WEIT ENTFERNT!\n");
			else
				printf("Die gesuchte Zahl ist groesser! GANZ WEIT WEG!\n");
		}
			
		else if (user > random) {
			if ((user - random) < 5)
				printf("Die gesuchte Zahl ist kleiner! NAHE DRAN!\n");
			else if ((user - random) < 10)
				printf("Die gesuchte Zahl ist kleiner! RICHTIGE RICHTUNG!\n");
			else if ((user - random) < 25)
				printf("Die gesuchte Zahl ist kleiner! WEIT ENTFERNT!\n");
			else
				printf("Die gesuchte Zahl ist groesser! GANZ WEIT WEG!\n");
		}
	}

	return 0;
}