/*
#include<stdio.h>


escape(char s[], char t[]) {

	int c =0;

	for (int i = 0; t[i] !='\0';i++) {
		switch (t[i]) {
		case '\n':
			s[c] = '\\';
			c++;
			s[c] = 'n';
			c++;
			break;
		case '\t':
			s[c] = '\\';
			c++;
			s[c] = 't';
			c++;
			break;
		default:
			s[c++] = t[i];
			break;

		}

	}s[c] = '\0';

}

int main() {
	char t[500] ="Hello\t\t this is a test \n this is  a test \n\n hi";
	char s[500];

	int len = sizeof(t) / sizeof(char);

	
	printf("unescaped: ");
	for (int i = 0;t[i] != '\0';i++) {
		printf("%c", t[i]);
	}
	printf("\n");

	escape(s, t);


	printf("escaped: ");
	for (int i = 0;s[i] != '\0';i++) {
		printf("%c", s[i]);
	}

}
*/

#include<stdio.h>
#include<string.h>

void reverse(char s[]) {
	int c, i, j;
	for (i = 0, j = strlen(s) - 1;i < j;i++, j--) {
		c = s[i];
		s[i] = s[j];
		s[j] = c;
	 }
}

void itoa(int n, char s[]) {
	int i, sign;
	if ((sign = n) < 0) 
		n = -n;
	i = 0;
	do { 
		s[i++] = n % 10 + '0'; 
	} while ((n /= 10) > 0);
	if(sign < 0) {
		s[i++] = '-';
	s[i] = '\0';
	reverse(s);
	}
}



int main() {
	int i, j;
	char st[10];

	itoa(123,st);
}