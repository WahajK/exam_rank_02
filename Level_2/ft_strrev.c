/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/11 15:51:31 by muhakhan          #+#    #+#             */
/*   Updated: 2025/05/11 15:56:11 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str++)
		i++;
	return (i);
}

char	*ft_strrev(char *str)
{
	int	i;
	int	len;
	char	temp;

	i = 0;
	len = ft_strlen(str);
	while (i <= len / 2)
	{
		temp = str[i];
		str[i] = str[len - i - 1];
		str[len - i - 1] = temp;
		i++;
	}
	return (str);
}

int	main(void)
{
	char	str[] = "Hello, World!";
	
	write(1, "Original string: ", 17);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);

	ft_strrev(str);

	write(1, "Reversed string: ", 17);
	write(1, str, ft_strlen(str));
	write(1, "\n", 1);

	return (0);
}