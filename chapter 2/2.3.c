#include<stdio.h>

int atoi(s)
char s[];

{

	int i, n;

	n = 0;
	for (i = 0; s[i] >= '0' && s[i] <= '9';++i) {
		n = 10 * n + s[i] - '0';
		return(n);
	}
}


int main(void) {
	printf("htoi('84ada') = %d\n", atoi("84ada"));
	printf("htoi('FF') = %d\n", atoi("FF"));
	printf("htoi('F0') = %d\n", atoi("F0"));
	printf("htoi('12fab') = %d\n", atoi("12fab"));

}