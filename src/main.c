#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

#include <prime.h>

void printList(int upTo) {
	for (int i = 1; i<=upTo; i++) {
		(isPrime(i)) ? printf("\n\033[31m%d \033[0m", i) : printf("%d ", i);
	}
}

int main(int argc, char *argv[512]) {
	if (argc > 1) {
		char *endptr;
		int convertedStr = strtol(argv[1], &endptr, 10);
		printList(convertedStr);
	}
    return 0;
}
