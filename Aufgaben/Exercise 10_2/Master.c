/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Andreas Rubik */
/* Beispiel 10.2 */

#include <stdio.h>
#include <string.h>
#include "test.h"

int stringlength(char * s);

int main(int argc, char* argv[]) {
	test("empty string", stringlength("") == 0);
	test("'A'", stringlength("A") == 1);
	test("'012'", stringlength("012") == 3);
	test("'Das ist ein Test!'", stringlength("Das ist ein Test!") == 17);
	test("NULL", stringlength(NULL) == 0);

	return 0;
}

int stringlength(char* s) {
    int count = 0;
    char* parray = s;
    
    if (s == NULL)
        return 0;
    while (*parray != '\0') {
        count++;
        parray++;
    }
    
    return count;
}
