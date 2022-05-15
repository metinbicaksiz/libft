/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbicaksi <mbicaksi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 10:00:48 by mbicaksi          #+#    #+#             */
/*   Updated: 2022/05/08 18:27:34 by mbicaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	ft_strchr(const char *s, int c)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (s[i])
// 	{
// 		if (s[i] == (char)c)
// 			return ((char *)&s[i]);
// 			i++;
// 	}
// 	if ((char)c == s[i])
// 		return ((char *)&s[i]);
// 	return (NULL);
// }

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (char)c)
		return ((char *)(s + i));
	return (NULL);
}
