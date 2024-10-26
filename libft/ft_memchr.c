/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 00:17:33 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/25 15:08:01 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (((char *)s)[i] == (char)c)
		{
			return ((void *)((char *)s + i));
		}
		i++;
	}
	return (NULL);
}
// int main() {
//     const char *str = "Hello, world!";
//     char ch = 'o';
//     size_t n = ft_strlen(str);

// 	char *res = ft_memchr(str,ch,n);
// 	printf("%ld",res - str);
// }
