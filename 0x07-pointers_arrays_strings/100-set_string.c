#include "main.h"
/**
 * set_string - Set the value of a pointer to a char
 * @s: pointer to a pointer
 * @to: pointer pointing to char
 *
 * Return: Void
 */
void set_string(char **s, char *to)
{
	*s = to;
}
