#include <stdio.h>

int main()
{
	int x = 0;
	for (int i = 1; i < 1000; ++i)
		if (((i % 5) == 0) || ((i % 3) == 0))
			x = x + i;

	printf("%d\n", x);
}
