/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muhakhan <muhakhan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 11:38:55 by muhakhan          #+#    #+#             */
/*   Updated: 2025/04/08 11:44:07 by muhakhan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

size_t	ft_strcspn(const char *s, const char *rej)
{
	int	i;
	int	j;

	i = 0;
	while (s[i])
	{
		j = 0;
		while (rej[j])
			if (s[i] == rej[j++])
				return (i);
	}
	return (i);
}