
#include "main.h"


	/**
	 * Description: _isalpha - checks for alphabetic character
	 * @c: the character to be checked
	 * Return: 1 if c is a letter, 0 otherwise
	 */
	char _isalpha(char c)
	{
		return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
	}

