#include <stdio.h>
/**
* main - Main Function
* Return: Return 0
*/
int main(void)
{
	int i, j;
	
	for (i = 0; i <= 4)
	{
		printf("This is the STARTING of the outer loop %d\n", i);
			for (j = 0; j <= 4)
			{
				printf("Inner loop here with number %d\n", j);
			}
			printf("This is the ENDING of the outer loop %d\n", i);
	}

	return (0);
}
