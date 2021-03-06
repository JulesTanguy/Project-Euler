#include <stdio.h>

int main()
{
	int total = 0;
	int x = 0, y = 1, z = 2;

	int i = 0;
	while (z < 4000000){
		x = z;
		z += y;
		y = x;

		if ((y % 2) == 0)
			total += y;

		++i;
	}

	printf("%d\n", total);
}
