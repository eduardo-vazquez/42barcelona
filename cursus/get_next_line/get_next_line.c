/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:46:34 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/04 19:42:06 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	static char	*rest = NULL; 
	char		*line;

	line = NULL;
	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = ft_load_line(fd, line, &rest);
	return (line);
}

char	*ft_load_line(int fd, char *line, char **rest)
{
	char	*buffer;
	int		bytes_read;

	buffer = NULL;
	bytes_read = BUFFER_SIZE;
	if (*rest != NULL)
	{
		line = ft_strjoin(&line, rest);
		ft_free_malloc(rest);
		if (line == NULL)
			return (NULL);
	}
	while (ft_find_char_in_str(line, '\n') == 0 && bytes_read == BUFFER_SIZE)
	{
		buffer = ft_load_buffer(buffer, fd, &bytes_read);
		if (buffer == NULL && bytes_read < 0)
			return (ft_free_malloc(&line));
		if (bytes_read > 0)
			line = ft_strjoin(&line, &buffer);
		if (line == NULL)
			return (ft_free_malloc(&buffer));
	}
	*rest = ft_load_rest(line);
	line = ft_clean_line(line);
	return (line);
}

char	*ft_load_buffer(char *buffer, int fd, int *bytes_read)
{
	int	len;	

	len = 0;
	buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
	if (buffer == NULL)
	{
		*bytes_read = -1;
		return (NULL);
	}
	*bytes_read = read(fd, buffer, BUFFER_SIZE);
	if (*bytes_read <= 0)
	{
		ft_free_malloc(&buffer);
		return (buffer);
	}
	buffer[*bytes_read] = '\0';
	return (buffer);
}

char	*ft_load_rest(char *line)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = 0;
	while (line[i] != '\n' && line[i] != '\0')
		i++;
	if (line[i] == '\n')
		i++;
	if (line[i] == '\0')
		return (NULL);
	str = (char *)malloc(ft_strlen(line) - i + 1);
	if (str == NULL)
		return (NULL);
	while (line[i] != '\0')
		str[j++] = line[i++];
	str[j] = '\0';
	return (str);
}
