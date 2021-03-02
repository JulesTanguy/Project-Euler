#include <stdio.h>

int main()
{

	int total = 0;
	int t[] = { 0, 1, 2 };
	int i = 0;

	while (t[2] < 4000000)
	{
		t[0] = t[2];
		t[2] = t[1] + t[2];
		t[1] = t[0];
		++i;

		if ((t[1] % 2) == 0)
		{
			total = total + t[1];
		}
	}

	printf("%d\n", total);

}
