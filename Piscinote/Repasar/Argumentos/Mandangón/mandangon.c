#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;
	char	c;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i] != '\0')
		{
			c = argv[1][i];
			if ((c >= 'A' && c <= 'Y') || (c >= 'a' && c <= 'y'))
			{
				c++;
			}
			else if (c == 'z' || c == 'Z')
			{
				c -= 25;
			}
			write (1, &c, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
