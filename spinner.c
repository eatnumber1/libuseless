#include <stdio.h>
#include <stdbool.h>
#include <assert.h>

#include "spinner.h"

int spinner( FILE *stream ) {
	return fspinner(stdout);
}

int fspinner( FILE *stream ) {
	static int position = 0;
	register int c;
	c = putc('\r', stream);
	if( c == EOF ) return -1;
	switch( position ) {
		case 0:
			c = putc('|', stream);
			break;
		case 1:
			c = putc('/', stream);
			break;
		case 2:
			c = putc('-', stream);
			break;
		case 3:
			c = putc('\\', stream);
			break;
		default:
			assert(false);
	}
	if( c == EOF ) return -1;
	c = fflush(stream);
	if( c == EOF ) return -1;
	position = (position + 1) % 4;
}
