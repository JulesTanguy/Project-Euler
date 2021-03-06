#include <stdio.h>

#define NUMBER_SIZE 7000

int main()
{
	int result = 0;
	int i2 = 0;

	for (int x = 1; x < NUMBER_SIZE; ++x){

		if ((600851475143 % x) == 0){

			for (int i = 2; i < NUMBER_SIZE; ++i)
				if ((x % i) == 0)
					++i2;
					
			if (i2 < 2)
				result = x;

			i2 = 0;
		}
	}

	printf("%d\n", result);
}
