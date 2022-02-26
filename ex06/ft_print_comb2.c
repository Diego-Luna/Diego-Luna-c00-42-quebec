/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dluna-lo <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:46:26 by dluna-lo          #+#    #+#             */
/*   Updated: 2022/02/25 22:27:19 by dluna-lo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_write_value(char v1, char v2)
{
	write(1, &v1, 1);
	write(1, &v2, 1);
}

void	ft_print(int a, int b, int c, int d)
{
	ft_write_value(a, b);
	write(1, " ", 1);
	ft_write_value(c, d);
	if (!(a == '9' && b == '8' && c == '9' && d == '9'))
	{
		write(1, ", ", 2);
	}
}

void	ft_loop(int a, int b, int c, int d)
{
	while (a < ('9' + 1))
	{
		while (b < ('8' + 1))
		{	
			while (c < ('9' + 1))
			{
				d = b;
				while (d < ('8' + 1))
				{
					d++;
					ft_print(a, b, c, d);
				}
				c++;
			}
			c = '0';
			b++;
		}
		b = '0';
		a++;
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;
	int	c;
	int	d;

	a = '0';
	b = '0';
	c = '0';
	d = '0';
	ft_loop(a, b, c, d);
}

int	main(void)
{
	ft_print_comb2();
}
