#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Last digit
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n;
        char *strnumber;
	int c;

	strnumber = (char *)malloc(sizeof(char));
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	itoa(n,strnumber,100);
	c = int(strnumber[strlen(strnumber) - 1)]);
	if (c > 5)
	    printf("Last digit of %d is %d
		 and is greater than 5", n, c);
	if (c == 0)
	    printf("Last digit of %d is %d
		 and is 0", n, c);
	if (c < 6 && c != 0)
            printf("Last digit of %d is %d 
		and is less than 6 and not 0", n, c);
	return (0);
}
