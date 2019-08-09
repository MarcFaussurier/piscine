int	ft_iterative_factorial(int nb)
{
	int i;
	int x;

	if (nb < 0)
		return (0);
	x = 1;
	i = 1;
	while (i <= nb)
	{
		x *= i;
		i += 1;
	}
	return (x);
}

int	ft_reccursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (nb);
	else if (nb < 0)
		return (0);
	else
		return (nb * ft_reccursive_factorial(nb - 1));
}

int	ft_iterative_power(int nb,int power)
{
	int i = 0;
	int x = 1;
	int isn = 0;

	if (power < 0)
	{
		isn = 1;
		power *= -1;
	}
	while (i < power)
	{
		x *= nb;
		i += 1;
	}
	return (isn ? 0 : x);
}

int	ft_reccursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power == 1)
		return (nb);
	if (power < 0)
		return (0);
	return (nb * ft_reccursive_power(nb, power - 1));
}

int	ft_fibonacci(int index)
{
	if (index == 0 || index == 1)
		return (index);
	if (index < 0)
		return (-1);
	return (ft_fibonacci(index - 2) + ft_fibonacci(index - 1));
}

int	ft_sqrt(int nb)
{
	int	i;

	i = 0;
	if (nb < 0)
		return (0);	
	while (i < nb)
		if (i * i == nb)
			return (i);
		else
			i += 1;
	return (0);
}


int	ft_is_prime(int nb)
{
	int 	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i < nb)
		if (nb % i == 0)
			return (0);
		else
			i += 1;
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = nb;
	while (1)
		if (ft_is_prime(i))
			return (i);
		else if (i == 2147483647)
			break ;
		else
			i += 1;
	return (0);
}