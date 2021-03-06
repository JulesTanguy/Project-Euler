#include <stdio.h>

#define SIZE 100000

int main()
{
	int x, y, find, i = 0, ifind;
	int t[SIZE];
	int palindrome = 0;

	for (int i = 0; i < SIZE; i++)
		t[i] = 1;

	for (x = 1000; x > 910; --x)

		for (y = 1000; y > 910; --y){

			find = x * y;
			int rev = 0, remainder = 0;
			ifind = find;

			while (ifind != 0){
				remainder = ifind % 10;
				rev = rev *10 + remainder;
				ifind /= 10;
			}

			if (find == rev){
				t[i] = find;
				++i;
			}
		}

	for (int i = 0; i < SIZE; ++i)
		if (t[i] > palindrome)
			palindrome = t[i];

	printf("%d\n", palindrome);
}
