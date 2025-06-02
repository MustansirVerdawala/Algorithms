#include <stdlib.h>
#include <stdio.h>
#include "towers.h"

int main(int argc, char **argv){
    int n = 3;
    int from = 1;
    int dest = 2;
    if (argc == 2) {
        n = atoi(argv[1]);
    }
	else if (argc == 4) {
		n = atoi(argv[1]);
		from = atoi(argv[2]);
		dest = atoi(argv[3]);
	}
	else if (argc != 1){
		fprintf(stderr, "Invalid command input arguments");
		exit(1);
	}

	if (from>3 || dest>3){
		fprintf(stderr, "Invalid command input arguments");
		exit(1);
	}
    towers(n, from, dest);
    exit(0);
}
