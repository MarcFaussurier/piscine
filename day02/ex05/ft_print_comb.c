/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_comb.c                                  .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/01 19:51:09 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/01 21:58:31 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

void	display(char n1, char n2, char n3)
{
	if (n1 + n2 + n3 != '0' + '1' + '2')
	{
		write(1, ",", 1);
		write(1, " ", 1);
	}
	write(1, &n1, 1);
	write(1, &n2, 1);
	write(1, &n3, 1);
}

void	ft_print_comb(void)
{
	char	n1;
	char	n2;
	char	n3;

	n1 = '0' - 1;
	n2 = '1' - 1;
	n3 = '2' - 1;
	while (++n1 <= '7')
	{
		while (++n2 <= '8')
		{
			while (++n3 <= '9')
			{
				if (n1 < n2 && n2 < n3)
				{
					display(n1, n2, n3);
				}
			}
			n3 = '0';
		}
		n2 = '0';
	}
}

int		main(void)
{
	ft_print_comb();
}