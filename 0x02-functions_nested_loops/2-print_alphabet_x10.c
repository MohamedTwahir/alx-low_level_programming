#include<stdio.h>
#include "main.h"

/**
 *print_alphabet_x10 - Begin Here
 *print a-z
 *Return: Value 0 (true)
 */

void print_alphabet_x10(void)
{
int i = 0;
for (i = 0; i <= 9; i++)
{
char ch = 'a';

while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
}
}
