/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmonatis <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 09:24:09 by rmonatis          #+#    #+#             */
/*   Updated: 2020/06/26 14:54:40 by rmonatis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void ft_putchar(char c)
{
	write(1, &c, 1);
}


int main(int size, char *name[])
{	
	int i;
	i = 0;
	while(name[0][i] != '\0')
	{
		ft_putchar(name[0][i]);
		i++;
	}
	
	return(0);
}

