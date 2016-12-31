/* SAMPLE INPUT PROGRAM */

#include "header.h"

// LOCAL Defines
#define TOTAL x + y
#define MESSAGE "ON A CLEAR DAY YOU CAN C FOREVER"
#define FORMAT1 "%s\n"
#define FORMAT2 "%d %d\n"

int main(void) {
	int x, y, z, i, sum;
	
	/* This is a multi-line comment, 
	this should be removed as well
	if the program works correctly
	- at least that is the idea */

	printf(FORMAT1, MESSAGE);	// Remove this comment too
	printf(NEWLINE); /* Another comment to remove */

	sum = ZERO;
	for (i = MIN; i <= MAX; ++i) {
		sum += i;
	}
	x = MAX;
	y = MIN;
	z = TOTAL;
	printf(FORMAT2, sum, z);
	return 0;
}
