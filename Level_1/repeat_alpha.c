/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   repeat_alpha.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:04:26 by muhakhan          #+#    #+#             */
/*   Updated: 2025/04/02 16:15:04 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if ((argv[1][i] >= 65 && argv[1][i] <= 90)
				|| (argv[1][i] >= 97 && argv[1][i] <= 122))
			{
				j = 0;
				if (argv[1][i] >= 65 && argv[1][i] <= 90)
					while (j <= argv[1][i] - 65)
					{
						write (1, &argv[1][i], 1);
						j++;
					}
				else if (argv[1][i] >= 97 && argv[1][i] <= 122)
					while (j <= argv[1][i] - 97)
					{
						write (1, &argv[1][i], 1);
						j++;
					}
			}
			else
				write(1, &argv[1][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
}