#include <stdio.h>

/**
 *main - print alphabet in lower and uppercase
 *
 *Return: (0) Success
 */
int main(void)
{
int c;

for (c = 0; c < 26; ++c)
putchar('a' + c);

putchar('\n');

return (0);
}
