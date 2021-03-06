#include <stdio.h>

#define NBR 20

int main()
{
	int y, r = 0; 
	
	int x = 1;
	while (r < 1){

		y = 0;

		for (int i = 1; i <= NBR; ++i)
			if (x % i == 0)
				y++;

		if (y == NBR)
			r = x;
		x++;
	}

	printf("%d\n", r);

}
