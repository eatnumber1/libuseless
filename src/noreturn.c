#include "noreturn.h"

#include <stdbool.h>
#include <math.h>
#include <assert.h>

int fnprime( FILE *stream, long double start ) {
	assert(start > 0);
	if( start <= 2 ) {
		if( start == 1 ) fprintf(stream, "%.0Lf, ", start++);
		fprintf(stream, "%.0Lf, ", start++);
	}
	long double target = start;
	if( fmodl(target, 2) == 0 ) target++;
	while( true ) {
		long double stop = sqrtl(target);
		for( long double i = 2; i <= stop; i++ ) {
			if( fmodl(target, i) == 0 ) goto cont;
		}
		if( stream != NULL ) {
			if( fprintf(stream, "%.0Lf, ", target) < 0 ) return -1;
		}
cont:
		target += 2;
	}
}

int nprime( long double start ) {
	return fnprime(stdout, start);
}

int fprime( FILE *stream ) {
	return fnprime(stream, 1);
}

int prime() {
	return fprime(stdout);
}

// vim:ts=4
