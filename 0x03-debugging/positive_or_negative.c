#include <stdio.h>
#include "main.h"

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else if (i == 0)
		printf("0 is zero\n");
	else
		printf("%d is positive\n", i);
}
