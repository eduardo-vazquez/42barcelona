/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:20:59 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/05 15:29:54 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
		i++;
	return (i);
}

void	*ft_free_malloc(char **str)
{
	if (*str != NULL)
	{
		free(*str);
		*str = NULL;
	}
	return (NULL);
}

char	*ft_strjoin(char **str1, char **str2)
{
	int		i;
	int		j;
	char	*str_new;

	j = 0;
	str_new = (char *)malloc(sizeof(char) * \
		(ft_strlen(*str1) + ft_strlen(*str2) + 1));
	if (str_new == NULL)
	{
		ft_free_malloc(str1);
		ft_free_malloc(str2);
		return (NULL);
	}
	i = 0;
	if (*str1 != NULL)
		while ((*str1)[i] != '\0')
			str_new[i++] = (*str1)[j++];
	i = 0;
	if (*str2 != NULL)
		while ((*str2)[i] != '\0')
			str_new[j++] = (*str2)[i++];
	str_new[j] = '\0';
	ft_free_malloc(str2);
	ft_free_malloc(str1);
	return (str_new);
}

int	ft_find_char_in_str(const char *str, char c)
{
	int	i;

	i = 0;
	if (str == NULL)
		return (0);
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (i + 1);
		i++;
	}
	i = 0;
	return (i);
}

char	*ft_clean_line(char *line)
{
	int		i;
	char	*str_new;

	i = 0;
	while (line[i] != '\0' && line[i] != '\n')
		i++;
	str_new = (char *)malloc((i + 2) * sizeof(char));
	if (str_new == NULL)
	{
		ft_free_malloc(&line);
		return (NULL);
	}
	i = 0;
	while (line[i] != '\n')
	{
		str_new[i] = line[i];
		i++;
	}
	str_new[i] = '\n';
	str_new[i + 1] = '\0';
	ft_free_malloc(&line);
	return (str_new);
}
