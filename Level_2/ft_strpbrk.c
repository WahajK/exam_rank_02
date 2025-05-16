/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strpbrk.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:41:37 by muhakhan          #+#    #+#             */
/*   Updated: 2025/05/11 15:58:04 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strpbrk(char *s, char *accept)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (accept[j])
		{
			if (s[i] == accept[j])
				return (&s[i]);
			j++;
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>

int	main(void)
{
	char str[] = "hello world";
	char accept[] = "ow";
	char *result;

	result = ft_strpbrk(str, accept);
	if (result)
		printf("First matching character: %c\n", *result);
	else
		printf("No matching characters found.\n");
	return (0);
}