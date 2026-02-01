/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/09 14:23:18 by evazquez          #+#    #+#             */
/*   Updated: 2023/03/09 14:34:43 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_next_c(char const *str, char c, int i)
{
	while (str[i] && str[i] != c)
		i++;
	return (i);
}

int	ft_nextstrn(char const *str, char c, int i)
{
	while (str[i] && str[i] == c)
		i++;
	return (i);
}

int	ft_numstrns(const char *str, char c)
{
	int	words;
	int	i;

	i = 0;
	words = 0;
	while (str[i])
	{
		if (str[i] != c)
		{
			words++;
			i = ft_next_c(str, c, i);
		}
		else
			i++;
	}
	return (words);
}

void	ft_free(char **str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

char	**ft_split(const char *str, char c)
{
	char	**res;
	int		i;
	int		j;

	res = (char **) malloc(sizeof(char *) * (ft_numstrns(str, c) + 1));
	if (!str || !res)
		return (NULL);
	i = 0;
	j = 0;
	while (j < ft_numstrns(str, c))
	{
		i = ft_nextstrn(str, c, i);
		res[j] = ft_substr(str, i, ft_next_c(str, c, i) - i);
		if (!res[j])
		{
			ft_free(res);
			return (NULL);
		}
		i = ft_next_c(str, c, i);
		j++;
	}
	res[j] = NULL;
	return (res);
}
