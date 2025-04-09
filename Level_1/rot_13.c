/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:18:41 by muhakhan          #+#    #+#             */
/*   Updated: 2025/04/02 17:18:04 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int		i;
	char	ch;

	i = 0;
	if (argc == 2)
	{
		while (argv[1][i])
		{
			if (argv[1][i] >= 65 && argv[1][i] <= 90)
			{
				if (argv[1][i] + 13 > 90)
					ch = ((argv[1][i] - 'A' + 13) % 26) + 'A';
				else
					ch = argv[1][i] + 13;
			}
			else if (argv[1][i] >= 97 && argv[1][i] <= 122)
			{
				if (argv[1][i] + 13 > 122)
					ch = ((argv[1][i] - 'a' + 13) % 26) + 'a';
				else
					ch = argv[1][i] + 13;
			}
			else
				ch = argv[1][i];
			write(1, &ch, 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}