/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS

/* Programmcode hier einfügen */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

/* Deklaration der Funktionsprototypen */
int contains(int arr[], int value);

int main(int argc, char* argv[]) {
    int i = 0;
    int j = 0;
    int tipps = 0;
    int random = 0;
    int sechsAus45[6];
    time_t t;
    srand((unsigned)time(&t));
    
    printf("Wie viele Tipps wollen sie bekommen? (1 - 10)\n");
    scanf("%d", &tipps);
    
    for(i = 0; i < tipps; i++) {
        for(j = 0; j < 6; j++) {
            while(1) {
                random = rand() % 46;
                if(contains(sechsAus45, random)) {
                    continue;
                } else {
                    break;
                }
            }
            sechsAus45[j] = random;
        }
        for(j = 0; j < 6; j++) {
            printf("%d ", sechsAus45[j]);
        }
        printf("\n");
    }

	return 0;
}

int contains(int arr[], int value) {
    int found = 0;
    
    for (int i = 0; i < 6; i++) {
        if (arr[i] == value) {
            found = 1;
            break;
        }
    }
    
    return found;
}