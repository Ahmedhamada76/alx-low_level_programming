#include "main.h"


	/**
	 *  Description: 'print_alphabet_x10 - prints 10 times the alphabet, in lowercase,'
	 * @parameter: string alphabet
	 * followed by a new line
	 */
	void print_alphabet_x10(void)
	{
		char alphabet;
		int i;


		i = 0;


		while (i < 10)
		{
			alphabet = 'a';
			while (alphabet <= 'z')
			{
				_putchar(alphabet);
				alphabet++;
			}
			_putchar('\n');
			i++;
		}
	}

