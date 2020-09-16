#include <stdio.h>

int main(void)
{
	struct {
		short a;
		double b;
		char c;
		int d;
	}var;

	printf("%d\n", sizeof(var));
	printf("%d\n", sizeof(double));

	return 0;
}

