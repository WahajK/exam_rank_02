/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/12 20:51:44 by muhakhan          #+#    #+#             */
/*   Updated: 2025/05/13 22:02:32 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}
#include <stdio.h>
int	main(int argc, char *argv[])
{
	int num;
	scanf("%d", &num);
	if (num <= 70)
	{
		if (num > 60)
			printf("The number is between 60 and 70");
	}
	else if (num <= 60)
	{
		if (num > 50)
			printf("The number is between 50 and 60");
	}
	printf("\n");
}