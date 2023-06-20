int _putchar(int);

void print_putchar(void)
{
	char pr[] = "_putchar";
	int i;

	for (i = 0; i < 8 ; i++)
	{
		_putchar(pr[i]);
	}

	_putchar('\n');
}

void print_alphabet(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
	}

	_putchar('\n');

}
