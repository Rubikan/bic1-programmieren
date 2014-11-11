/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Vorname Nachname */
/* Personenkennzahl */
/* Beispielnummer   */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include <ctype.h>

/* Definition der Maximalen Arraygrš§e */
#define MAX 15

int main(int argc, char* argv[]) {
    int i;
    int ascii;
    char name[MAX];
    char silben[][26] = {"KA","ZU","MI","TE","KU","LU","JI","RI","KI","ZU","ME","TA","RIN","TO","MO","NO","KE","SHI","ARI","CHI","DO","RU","MEI","NA","FU","ZI"};
    
    printf("Geben Sie Ihren Vornamen ein: ");
    scanf("%s", name);
    
    printf("Dein Ninja-Name ist: ");
    for (i = 0; i < MAX; i++) {
        if (name[i] == '\0')
            break;
        ascii = (int)(toupper(name[i]));
        printf("%s", silben[ascii-65]);
    }
    printf("\n");

	return 0;
}