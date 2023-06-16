#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * main - Printing in stderror
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
write(stderr,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",70);
return (1);
}
