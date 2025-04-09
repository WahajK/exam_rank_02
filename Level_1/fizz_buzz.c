/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizz_buzz.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:01:56 by muhakhan          #+#    #+#             */
/*   Updated: 2025/04/02 15:17:17 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_num(int num)
{
	int	i;
	char	ch[3];

	i = 0;
	while (num > 0)
	{
		ch[i++] = (num % 10) + '0';
		num /= 10;
	}
	while (i-- > 0)
		write(1, &ch[i], 1);
}

int	main(int argc, char *argv[])
{
	int	i = 1;

	while (i <= 100)
	{
		if (i % 5 == 0 && i % 3 == 0)
			write(1, "fizzbuzz", 8);
		else if (i % 5 == 0)
			write(1, "buzz", 4);
		else if (i % 3 == 0)
			write(1, "fizz", 4);
		else
			print_num(i);
		write (1, "\n", 1);
		i++;
	}
}