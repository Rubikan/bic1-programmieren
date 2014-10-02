/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038    */
/* 03_1a         */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einf�gen */
#include <stdio.h>

/* Festlegen der Arraygr��e als Pr�prozessoranweisung */
#define MAX 100

int main(int argc, char* argv[]) {
	/* Deklarieren der Laufvariablen f�r die Schleifen */
	int i;
	int j;
	/* Deklarieren des Arrays mit der gr��e MAX */
	int array[MAX];

	/* immer den dreifachen Wert des Index an jede Arrayposition speichern */
	for (i = 0; i < MAX; i++) {
		array[i] = i * 3;
	}
	/* per Userabfrage einlesen, bis zu welchem Indexwert ausgegeben werden soll */
	printf("Bis zu welchem Indexwert sollen die Werte ausgegeben werden?\n");
	scanf("%d", &j);
	/* ausgeben der geraden Werte bis zum Index j */
	for (i = 0; i < j; i++) {
		if (array[i] % 2 == 0)
			printf("Index %d beinhaltet Wert %d.\n", i, array[i]);
	}

	return 0;
}