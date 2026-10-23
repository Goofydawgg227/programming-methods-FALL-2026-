//#include<stdio.h>
//#include<limits.h>
//#include<float.h>
//
//
//int main() {
//	printf("char \t\t\t -> %d \n", sizeof(char));
//	printf("short \t\t\t -> %d \n", sizeof(short));
//	printf("int \t\t\t -> %d \n", sizeof(int));
//	printf("long \t\t\t -> %d \n", sizeof(long));
//	printf("long long \t\t -> %d \n", sizeof(long long));
//	printf("float \t\t\t -> %d \n", sizeof(float));
//	printf("double \t\t\t -> %d \n", sizeof(double));
//	printf("long double \t\t -> %d \n", sizeof(long double));
//
//
//	printf("char \t\t\t -> %d <->  %d\n", SCHAR_MIN,SCHAR_MAX );
//	printf("unsigned char \t\t -> %d <->  %d\n", 0, UCHAR_MAX);
//	printf("short \t\t\t -> %d <->  %d\n", SHRT_MIN, SHRT_MAX);
//	printf("unsigned short \t\t -> %d <->  %d\n", 0, USHRT_MAX);
//	printf("int \t\t\t -> %d <->  %d\n", INT_MIN, INT_MAX);
//	printf("unsigned int \t\t -> %d <->  %d\n", 0, UINT_MAX);
//	printf("long \t\t\t -> %d <->  %d\n", LONG_MIN, LONG_MAX);
//	printf("unsigned long \t\t -> %d <->  %d\n", 0, ULONG_MAX);
//	printf("float \t\t\t -> %d <->  %d\n", FLT_MIN, FLT_MAX);
//	printf("double \t\t\t -> %d <->  %d\n", DBL_MIN, DBL_MAX);
//	printf("long double \t\t -> %d <->  %d\n", LDBL_MIN, LDBL_MAX);
//
//	return 0;
//}

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
	printf("htoi('84ada') = %d\n", htoi("84ada"));
	printf("htoi('FF') = %d\n", htoi("FF"));
	printf("htoi('F0') = %d\n", htoi("F0"));
	printf("htoi('12fab') = %d\n", htoi("12fab"));

}