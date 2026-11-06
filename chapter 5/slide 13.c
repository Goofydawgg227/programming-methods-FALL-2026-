#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

int main(int argc, int* argv) {
	
	FILE* fp;
	void filecopy(FILE*, FILE*);
	char* prog = argv[0];

	if (argc == 1) {
		filecopy(stdin, stdout);
	}
	else {
		while (--argc > 0) {
			if ((fp = fopen(++argv, "r")) == NULL) {
				fprintf(stderr, "%s : can't open %s \n", prog, *argv);
				exit(1);
			}
			else { 
				filecopy(fp, stdout);
				fclose(fp);
			}
			if (ferror(stdout)) {
				fprint(stderr, "%s: error writing stdout\n", prog);
				exit(1);
			}
		}
		exit(1);
	}
}

void filecopy(FILE* ifp, FILE* sfp) {
	int c;
	while ((c = getc(ifp)) != EOF) {
		putc(c, sfp);
	 }
}