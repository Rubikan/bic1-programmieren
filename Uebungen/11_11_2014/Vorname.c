/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include <string.h>

/* Funktionsprototypen */
int getBinary (char datum, int offset);

/* Definition der Maximalen Arraygrš§e */
#define MAX 15

int main(int argc, char* argv[]) {
    int i;
    int j;
    char name[MAX];
    
    printf("Geben Sie Ihren Vornamen ein: ");
    scanf("%s", name);
    
    printf("Char\tDez\tHex\tBinary \n");
    printf("--------------------------------\n");
    for (i = 0; i < MAX; i++) {
        if (name[i] == '\0')
            break;
        printf("%c\t", name[i]);
        printf("%d\t", name[i]);
        printf("0x%x\t", name[i]);
        for (j = 0; j < 8; j++) {
            printf("%d", getBinary(name[i], j));
        }
        printf("\n");
    }

	return 0;
}

int getBinary(char datum, int offset) {
    if ((datum & (1 << offset)) == 0) {
        return 0;
    } else {
        return 1;
    }
    return 0;
}