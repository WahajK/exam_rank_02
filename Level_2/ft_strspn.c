/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strspn.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 16:19:04 by muhakhan          #+#    #+#             */
/*   Updated: 2025/05/08 16:40:06 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

size_t	ft_strspn(const char *s, const char *charset)
{
	int	i;
	int	j;
	int	flag;

	while (s[i])
	{
		j = 0;
		flag = 0;
		while (charset[j])
		{
			if (charset[j] == s[i])
				flag = 1;
			j++;
		}
		if (!flag)
			return (i);
		i++;
	}
	return (i);
}