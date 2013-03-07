/*
	Generates HEX-words
	crille@crille.org 20130307

*/
#include <stdio.h>
#include <time.h>

int main (int argc, int *argv[]) {
	char allChars[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'A', 'B', 'C', 'D', 'E', 'F'};
	int i, j, numWords=0, wordSize=0;
	srand(time(NULL));
	
	if (argc == 1)
		printf("Usage: ./hex <wordsize> <# words> \nExample: ./hex 6 25 (Generate 25 words of 6 hex letters)");
	else if (argc == 3) {
		wordSize = atoi (argv[1]);
		numWords = atoi (argv[2]);
	}
	
	for (i=0 ; i<numWords ; i++) {
		for (j=0 ; j<wordSize ; j++) {
			int random = rand() % 16;
			printf ("%c", allChars[random]);
		}
		printf ("\n");
	}
	printf ("\n\n");
	return 0;
}
