#include <stdio.h>

int main()
{
	const int NBR = 20;
	int r = 0, x = 1;
	int y = 0;
	while (r < 1)
	{
		y = 0;
		for (int i = 1; i <= NBR; ++i)
		{
			if (x % i == 0)
			{
				y++;
			}
		}
		if (y == NBR)
		{
			r = x;
		}
		x++;
	}
	printf("%d\n", r);

}
