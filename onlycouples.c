#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
	char *lineptr = NULL;
	size_t linelen = 0;
	ssize_t read = 0;

	while ((read = getline(&lineptr, &linelen, stdin)))
	{
		if (read == -1)
		{
			return 0;
		}

		int valid = 1;

		for (ssize_t i = 0; lineptr[i] != 0; i += 2) {
		
			if (lineptr[i] == '\n')
			{
				break;
			}

			if (lineptr[i] != lineptr[i + 1]) {
				valid = 0;
				break;
			}
		}

		if (valid)
		{
			printf("%s", lineptr);
		}
	}

	free(lineptr);
	return 0;
}
