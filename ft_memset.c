/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbicaksi <mbicaksi@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 07:46:23 by mbicaksi          #+#    #+#             */
/*   Updated: 2022/05/05 20:38:19 by mbicaksi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *dest, int data, size_t n)
{
	size_t	i;

	if (!dest)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char *)(dest + i) = (unsigned char)data;
		i++;
	}
	return (dest);
}

// int main()
// {
//     int a = 15;
//     int *p = &a;
//     ft_memset(p, 4, 2);
//     printf("%d", a);
// }
