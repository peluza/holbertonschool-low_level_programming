/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{

	int i, j;


	for (i = 0; i < 100; i++)

	{

		for (j = 0; j < 100; j++)

		{

			if (i < j)

			{

				putchar(i / 10 + 48);

				putchar(i % 10 + 48);

				putchar(32);

				putchar(j / 10 + 48);

				putchar(j % 10 + 48);

				if (i < 98)

				{

					putchar(44);

					putchar(32);

				}

			}

		}
}
putchar(10);

return (0);
}
