/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:29:35 by muhakhan          #+#    #+#             */
/*   Updated: 2025/04/08 11:36:54 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	main(int argc, char *argv[])
{
	int	result;

	if (argc == 4)
	{
		if (argv[2][0] == '+')
			result = atoi(argv[1]) + atoi(argv[3]);
		else if (argv[2][0] == '-')
			result = atoi(argv[1]) - atoi(argv[3]);
		else if (argv[2][0] == '/')
			result = atoi(argv[1]) / atoi(argv[3]);
		else if (argv[2][0] == '*')
			result = atoi(argv[1]) * atoi(argv[3]);
		printf("%d", result);
	}
	printf("\n");
}