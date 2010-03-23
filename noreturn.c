#include "noreturn.h"

#include <stdbool.h>

int fnprime( FILE *stream, unsigned long long int start ) {
	unsigned long long int target = start;
	while( true ) {
		for( unsigned long long int i = 2; i < target; i++ ) {
			if( target % i == 0 ) {
				if( stream != NULL ) {
					if( fprintf(stream, "%lld, ", target) < 0 ) return -1;
				}
				goto cont;
			}
		}
		if( stream != NULL ) {
			if( fprintf(stream, "%lld, ", target) < 0 ) return -1;
		}
cont:
		target++;
	}
}

int nprime( unsigned long long int start ) {
	return fnprime(stdout, start);
}

int fprime( FILE *stream ) {
	return fnprime(stream, 2);
}

int prime() {
	return fprime(stdout);
}

// vim:ts=4
