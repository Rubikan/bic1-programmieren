#include <stdio.h>
#include "test.h"

void test(const char * message, int assertion)
{
	printf("%s : %s\n", assertion ? "OK    " : "FAILED", message);
}