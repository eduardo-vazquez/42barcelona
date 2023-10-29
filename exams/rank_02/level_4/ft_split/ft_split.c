#include <stdlib.h>

char* ft_strncpy(char* s1, char* s2, int n)
{
	int index = 0;

	while (index < n && s2[index])
	{
		s1[index] = s2[index];
		index++;
	}
	s1[index] = '\0';
	return (s1);
}

char	**ft_split(char *str)
{
	int 	i = 0;
	int		i_flag = 0;
	int 	wc = 0;
	int 	k = 0;
	char** 	out;

	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		if (str[i])
			wc++;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
	}
	out = (char**)malloc((wc + 1) * sizeof(char*));
	i = 0;
	while (str[i])
	{
		while (str[i] && (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'))
			i++;
		i_flag = i;
		while (str[i] && (str[i] != ' ' && str[i] != '\t' && str[i] != '\n'))
			i++;
		if (i > i_flag)
		{
			out[k] = (char*)malloc((i - i_flag + 1) * sizeof(char));
			ft_strncpy(out[k], &str[i_flag], i - i_flag);
			k++;
		}
	}
	out[k] = NULL;
	return (out);
}
