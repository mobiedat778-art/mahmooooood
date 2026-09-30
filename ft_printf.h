/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mobaidat <mobaidat@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/09/29 13:21:19 by mobaidat          #+#    #+#             */
/*   Updated: 2026/09/30 19:28:31 by mobaidat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <stdint.h>
# include <unistd.h>

int	ft_putchar(char c);
int	ft_putstr(const char *s);
int	ft_putptr(void *ptr);
int	ft_percent(void);
int	ft_putnbr(int n);
int	ft_putunsigned(unsigned int n);
int	ft_putlower(unsigned int n);
int	ft_putupper(unsigned int n);

#endif
