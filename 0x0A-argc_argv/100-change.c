#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry point
 *
 * Description: code that print the numbers of coin we need to devise a number
 *
 * argc: a argument that cont numbers
 * argv: a string that contine the name of argument
 *
 * return:Always  0 (success)
*/

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int b, lcents = 0, mny = atoi(argv[1]);
		int cents[] = {25, 10, 5, 2, 1};

		for (b = 0; b < 5; b++)
		{
			if (mny >= cents[b])
			{
				lcents += mny / cents[b];
				mny = mny % cents[b];
				if (mny % cents[b] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lcents);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
