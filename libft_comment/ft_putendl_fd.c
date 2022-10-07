/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:41:56 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 16:10:40 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Produz a string 's' para o descritor de arquivo dado seguido de uma nova linha.

void	ft_putendl_fd(char *s, int fd)
{
	int	i; // criamos um índice para percorrer a string.

	i = 0; // o índice começa no zero
	while (s[i] != '\0') // enquando s[i] naõ for o byte nulo
	{
		write(fd, &s[i], 1); //no descritor passado, colocamos o conteúdo de s[i]
		i++; // i ganha uma unidade
	}
	write(fd, "\n", 1); //no descritor passado, colocamos uma quebra de linha
}

/*_________________________poderia ser feito assim também ____________________________*/

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Produz a string 's' para o descritor de arquivo dado seguido de uma nova linha.

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd); //aqui chamamos a função que já fizemos anteriormente e que 
	// no descritor passado, coloca o conteúdo da string apontada por s 
	write(fd, "\n", 1); //no mesmo descritor passado, colocamos uma quebra de linha
}
