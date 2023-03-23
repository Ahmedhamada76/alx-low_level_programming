 #include "main.h"


	/**
	 *  10 x fois print_alphabet - print all alphabet in lowercase
	 * print_alphabet_x10 - prints 10 times the alphabet, in lowercase,
	 * followed by a new line
	 */
	void print_alphabet_x10(void)
	{
		char ch;
		int i;


		i = 0;


		while (i < 10)
		{
			ch = 'a';
			while (ch <= 'z')
			{
				_putchar(ch);
				ch++;
			}
			_putchar('\n');
			i++;
		}
	}

