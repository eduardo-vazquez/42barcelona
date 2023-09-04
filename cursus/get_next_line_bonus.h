/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/26 13:48:08 by evazquez          #+#    #+#             */
/*   Updated: 2023/09/04 16:23:28 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# include <fcntl.h>
# include <string.h>
# include <limits.h>

char	*get_next_line(int fd);
char	*ft_load_line(int fd, char *line, char **rest);
char	*ft_load_buffer(char *buffer, int fd, int *bytes_read);
char	*ft_load_rest(char *line);
int		ft_strlen(char *str);
void	ft_free_malloc(char **str);
char	*ft_strjoin(char **str1, char **str2);
int		ft_find_char_in_str(const char *str, char c);
void	ft_clean_line(char *line);
#endif
