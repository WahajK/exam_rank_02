/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:35:41 by muhakhan          #+#    #+#             */
/*   Updated: 2025/05/11 15:58:26 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>

int	ft_strlen(char *src)
{
	int	i = 0;

	while (src[i])
		i++;
	return i;
}

void	ft_strcpy(char *src, char *dest)
{
	int	i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
}

char	*ft_strdup(char *src)
{
	char	*arr;

	arr = malloc(ft_strlen(src) + 1);
	if (!arr)
		return (NULL);
	ft_strcpy(src, arr);
	return (arr);
}

int	main(void)
{
	char	*original = "Hello, World!";
	char	*copy;

	copy = ft_strdup(original);
	if (copy)
	{
		write(1, copy, ft_strlen(copy));
		write(1, "\n", 1);
		free(copy);
	}
	return (0);
}