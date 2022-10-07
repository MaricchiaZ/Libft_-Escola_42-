/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:33:17 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 16:10:35 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Produz a string 's' para o descritor de arquivo dado.

void	ft_putstr_fd(char *s, int fd)
{
	int	i; // criamos um índice para percorrer a string.

	i = 0; // o índice se inicia zerado
	while (s[i] != '\0') // enquanto o conteúdo de s[i] for diferente de nulo
	{
		write (fd, &s[i], 1); // descritor de arquivo dad colocamos o  conteúdo de s[i]
		i++; // i ganha uma unidade
	}
}
