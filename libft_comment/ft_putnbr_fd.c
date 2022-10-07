/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/09 00:49:39 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/14 17:58:25 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//descrição da função nas diretrizes da tarefa:
//Produz o número inteiro 'n' para o descritor de arquivo em questão.


//função auxiliar - COMEÇE LENDO PELA OUTRA FUNÇÂO

//essa função é static; funções estáticas são funções que só são visíveis para outras funções neste mesmo arquivo 
//ou (mais precisamente a mesma unidade de tradução)
// esta função auxiliar converte o valor do int para o valor dele em ASCII e "imprime" no FD passado
static void	convert_char_int(int n, int fd)
{
	char	c; // criamos um char auxiliar

	c = '0'; // esse char recebe o valor do zero na tabela ASCII
	c = c + n; // o zero é adicionado ao int n passado, assim passamos a ter um char com o mesmo valor desse n
	write (fd, &c, 1); //no descritor passado,  colocamos o conteúdo de c
}

//função principal - COMEÇE LENDO POR AQUI
void	ft_putnbr_fd(int n, int fd) //recebe um int a partir do qual fará a "impressão" caracter a caracter
{
	int	ten; // int auxiliar que receberá a potência de 10 referente ao número;

	ten = 1; // potência de 10 inicia-se em 1
	if (n == -2147483648) // para não ultrapassar o INT MAX, se for o INT MIN...
	{
		write(fd, "-2", 2); // no descritor passado já colocamos o dois priemiros ítens, o '-' e o '2'
		n = 147483648; // o número passa a valer 147483648
	}
	if (n < 0) // se o número fot menor do que zero
	{
		write(fd, "-", 1); // no descritor passado já colocamos o '-'
		n = n * -1; // nosso número é multiplicado por -1 e passa a ser positivo agora
	}
	while (ten <= n / 10) // enquanto a potência de 10 tiver menos casas do que o número passado
		ten = ten * 10; // multiplicamos essa potência por dez
	while (ten >= 1) // enquanto a potência de 10 for maior ou igual a 1
	{
		convert_char_int ((n / ten), fd); //número dividido pela potência de 10 (essa divisão fornece como
	// resultado apenas um dígito) que é passado para a função auxiliar que irá encaminha-lo para o FD fornecido
		n = n - (n / ten) * ten; 	//o número será agora o número sem sua casa mais alta (exemplo 567 fica 67)
		ten = ten / 10; //potência de dez perde uma casa
		//isso se repete até que todas as casas do número sejam convertidas para char
	}		
}
