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
