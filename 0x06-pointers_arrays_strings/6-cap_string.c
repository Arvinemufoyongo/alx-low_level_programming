#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @str: string to e capitalized
 * Return: a pointer to the changed string
 */
char *cap_string(char *)
{
	int b = 0;

	while (str[b])
	{
		while (!(str[a] >= 'a' && str[b] <= 'z'))
			b++;

		if (str[b -1] == ' ' ||
				str[b -1] == '\t' ||
				str[b -1] == '\n' ||
				str[b -1] == ',' ||
				str[b -1] == ';' ||
				str[b -1] == '.' ||
				str[b -1] == '!' ||
				str[b -1] == '? ' ||
				str[b -1] == '"' ||
				str[b -1] == '( ' ||
				str[b -1] == ') ' ||
				str[b -1] == '{ ' ||
				str[b -1] == ' }'||
				b == 0)
			str[b] = 32;
		
		b++;
	}
	return (str);
}

