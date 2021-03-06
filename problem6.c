#include <stdio.h>

#define NOMBRE 100

int main() 
{
	int result = 0;
	int x = 0;

	for (int i = 1; i<= NOMBRE; i++) 
		result += i * i;
	

	for (int i = 1; i<= NOMBRE; i++) 
		x += i;

	x = x * x;

	printf("%d\n", x - result);
}
