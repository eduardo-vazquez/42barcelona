/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: evazquez <evazquez@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/13 08:58:44 by evazquez          #+#    #+#             */
/*   Updated: 2023/08/23 17:29:53 by evazquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdio.h>
# include <string.h>
# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <string.h>

char	*ft_itoa(int n);
void	ft_test(void);
int		ft_digits(int n);
int		ft_print_c(char c);
int		ft_print_hex(unsigned int n, char x);
int		ft_putchar(long int c);
int		ft_print_num(long int n);
int		ft_print_p(unsigned long long ptr);
int		ft_print_s(char *ptr);
int		ft_arg_type(char const c, va_list list);
int		ft_iter(char const *arg, va_list list, int n, int aux_n);
int		ft_printf(char const *arg, ...);
int		ft_load_hex(unsigned int n, char x, char *hex_digits);
#endif
