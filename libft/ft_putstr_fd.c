/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mohben-t <mohben-t@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 15:39:31 by mohben-t          #+#    #+#             */
/*   Updated: 2024/10/24 09:45:19 by mohben-t         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
// int	main(void)
// {
// 	int fd = open("test.txt", O_WRONLY | O_CREAT);
// 	if (fd == -1)
// 		printf("error");
// 	ft_putstr_fd("hello_world!!", fd);
// 	close(fd);
// }