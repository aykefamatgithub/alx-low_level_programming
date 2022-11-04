#include <unistd.h>

/**
 * _pushchar -writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1
 * O error, -1 i s returned, and error is set approperiately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
