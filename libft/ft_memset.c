/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:46:40 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/25 18:58:33 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
// #include <stdio.h>

// int main(void)
// {
// 	void *s;
// 	int i = 80;
// 	char *x = (char *)ft_memset(s,i,6);
// 	printf("%s",x);
// }
// int main()
// {
// 	int a = 4;
// 	char *s = &a;
// 	ft_memset(s, 57, 1);
// 	ft_memset(s + 1, 5, 1);
// 	printf("%d", a);
// }