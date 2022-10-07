/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:18:46 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/13 15:59:39 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Produz o caractere 'c' para um descritor de arquivo ou descritor de ficheiro passado.

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1); //no descritor passado, ele coloca o conteúdo de c
}

// info adicional
//Os descritores de arquivo 0, 1 e 2 são entrada padrão, saída padrão e erro padrão para cada 
//processo em execução. Uma chamada inicial bem-sucedida para open()fornecerá o descritor de arquivo 3, 
//mesmo que outro processo em execução tenha um descritor de arquivo 3.

// Quando você abre o arquivo, o sistema operacional atribui um FD que está disponível e quando você o fecha, 
//o SO libera o FD e pode atribuir esse FD a outro arquivo aberto depois disso. A maneira de seu sistema operacional
// rastrear arquivos abertos e não tem nada a ver com um arquivo específico.

// Além disso, você tem um certo número de FD por isso que você pode ficar sem descritores de arquivo, 
//se você abrir muitos arquivos de uma só vez.