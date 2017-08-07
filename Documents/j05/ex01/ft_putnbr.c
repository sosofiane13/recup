/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smokhtar <smakhtar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/08/07 09:11:47 by smokhtar          #+#    #+#             */
/*   Updated: 2017/08/07 09:31:06 by smokhtar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c)
{
	putchar(c);
}

void	ft_putnbr(int nb)
{
	long int n;
	long int div;

	n = nb;
	div = 1;
	if (nb == 0)
	{
		ft_putchar('0');
	}
	if (nb < 0)
	{
		n = -n;
		ft_putchar('-');
	}
	while (div <= n)
	{
		div = div * 10;
	}
	div = div / 10;
	while (div != 0)
	{
		ft_putchar(((n / div) % 10) + 48);
		div = div / 10;
	}
	ft_putchar('\n');
}

void main()
{
	int a=8563;
	ft_putnbr(a);
}
