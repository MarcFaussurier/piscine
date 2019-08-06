/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_putstr_non_printable.c                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/05 11:11:23 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 20:08:56 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

const char	*g_hexn = "0123456789abcdef";

void	ft_puthexa(int n)
{
	char	c;

	while (n > 0)
	{
		c = g_hexn[n & 0xf];
		write(1, &c, 1);
		n >>= 4;
	}
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] < '!' || str[i] > '~')
		{
			write(1, "\\", 1);
			ft_puthexa(str[i]);
		}
		else
			write(1, &str[i], 1);
		i += 1;
	}
}