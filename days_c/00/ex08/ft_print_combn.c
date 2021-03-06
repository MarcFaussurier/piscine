/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_print_combn.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: mfaussur <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/08/03 13:05:57 by mfaussur     #+#   ##    ##    #+#       */
/*   Updated: 2019/08/05 19:25:15 by mfaussur    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_check_combn_digits(short *digits, int n)
{
	int	x;

	x = n - 1;
	while (x > 0)
	{
		if (digits[x - 1] >= digits[x])
		{
			digits[x] = digits[x - 1];
			return (0);
		}
		x -= 1;
	}
	return (1);
}

void	ft_print_combn_digits(short *digits, int n, int isfirst)
{
	int		x;
	char	out;

	x = 0;
	if (!isfirst)
	{
		write(1, ", ", 2);
	}
	while (x < n)
	{
		out = digits[x] + '0';
		write(1, &out, 1);
		x += 1;
	}
}

void	ft_increment_combn_digits(short *digits, int n, int current_digit)
{
	digits[current_digit] += 1;
	if (digits[current_digit] == 10)
	{
		digits[current_digit] = 0;
		ft_increment_combn_digits(digits, n, current_digit - 1);
	}
	else
	{
		return ;
	}
}

int		ft_sum_combn_digits(short *digits, int n)
{
	int		x;
	int		sum;
	int		ten;

	ten = 1;
	sum = 0;
	x = n - 1;
	while (x >= 0)
	{
		sum += ten * digits[x];
		x -= 1;
		ten *= 10;
	}
	return (sum);
}

void	ft_print_combn(int n)
{
	short	digits[n];
	short	max_digits[n];
	int		x;
	int		max_sum;
	int		current_sum;

	x = 0;
	while (x < n)
	{
		digits[x] = x;
		max_digits[x] = (10 - n + x);
		x += 1;
	}
	max_sum = ft_sum_combn_digits(max_digits, n);
	ft_print_combn_digits(digits, n, 1);
	current_sum = 0;
	while (current_sum < max_sum)
	{
		ft_increment_combn_digits(digits, n, n - 1);
		if (ft_check_combn_digits(digits, n))
		{
			ft_print_combn_digits(digits, n, 0);
			current_sum = ft_sum_combn_digits(digits, n);
		}
	}
}
