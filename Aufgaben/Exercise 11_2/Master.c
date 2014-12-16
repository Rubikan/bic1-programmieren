/* Mastervorlage Gueltig ab: 2011-07-30*/

/* Folgende Angaben sind hier im Kommentar verpflichtend zu erfassen */
/* Andreas Rubik */
/* 1410258038 */
/* 11_02 */

/* unsafe warning wird ausgeblendet */
#define _CRT_SECURE_NO_WARNINGS 

/* Programmcode hier einfügen */
#include <stdio.h>
#include "stack.h"

int main(int argc, char* argv[]) {	
	int i;
	/* create empty stack */
	Stack stack = create_stack(15);
	/* push elements onto stack */
	for (i = 0; i <= 20; i++) push(i, &stack);
	/* pop all elements from stack */
	while (stack.count > 0) printf("%d\n", pop(&stack));
	free(stack.data);

	return 0;
}