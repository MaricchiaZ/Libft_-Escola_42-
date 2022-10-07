/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maclara- <maclara-@student.42sp.org.br>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/02 19:12:27 by maclara-          #+#    #+#             */
/*   Updated: 2022/09/30 17:56:02 by maclara-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// para criarmos uma biblioteca precisamos conferir se ela não existe, e se não existir
// criamos usando os os cabeçalhos das funções que teremos nela

#ifndef LIBFT_H //A #ifndef diretiva verifica se o identificador não tiver sido definido
// ou se sua definição tiver sido removida com #undef, a condição será verdadeira 
//(diferente de zero).
# define LIBFT_H // e nesse caso ele define a libft.h (repare que usamos em MAIÚSCULAS e trocamos
// o ponto e pelo _ )

# include <unistd.h> // aqui incluímos as bibliotecas externas e pré-existentes que usaremos 
// para as nossas funções funcionarem
# include <stdlib.h> //outra biblioteca usada

// isso é uma struct 
// Structs, também conhecidas como Registros, definem tipos de dados que agrupam 
//variáveis sob um mesmo tipo de dado.
// A ideia de usar uma struct é permitir que, ao armazenar os dados de uma mesma
// entidade, isto possa ser feito com uma única variável.
typedef struct s_list // aqui criamos a struct
{
	void			*content; // aqui definimos o campo content , o content é um ponteiro void
	struct s_list	*next; // aqui definimos o campo next; next é uma chamada recursiva da struct
}	t_list; //aqui definimos o nome dessa nova struct criada

int		ft_isalpha(char c); // daqui em diante colocamos o protótipo de cada função que vai compor
// a nossa biblioteca
int		ft_isdigit(int c);

int		ft_isalnum(int c);

int		ft_isascii(int c);

int		ft_isprint(int c);

int		ft_strlen(const char *s);

void	*ft_memset(void *s, int c, size_t n);

void	ft_bzero(void *s, int n);

void	*ft_memcpy(void *dest, const void *src, size_t n);

void	*ft_memmove(void *dest, const void *src, size_t n);

size_t	ft_strlcpy(char *dest, const char *src, size_t size);

size_t	ft_strlcat(char *dest, const char *src, size_t size);

int		ft_toupper(int c);

int		ft_tolower(int c);

char	*ft_strchr(const char *s, int c);

char	*ft_strrchr(const char *s, int c);

int		ft_strncmp(const char *s1, const char *s2, size_t n);

void	*ft_memchr(const void *s, int c, size_t n);

void	*ft_calloc(size_t nmemb, size_t size);

char	*ft_strdup(const char *src);

char	*ft_strjoin(char const *s1, char const *s2);

char	*ft_strnstr(const char *s1, const char *s2, size_t n);

char	*ft_substr(char const *s, unsigned int start, size_t len);

int		ft_atoi(const char *nptr);

int		ft_memcmp(const void *s1, const void *s2, size_t n);

char	*ft_strtrim(char const *s1, char const *set);

char	**ft_split(char const *s, char c);

char	*ft_itoa(int n);

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void	ft_striteri(char *s, void (*f)(unsigned int, char*));

void	ft_putchar_fd(char c, int fd);

void	ft_putstr_fd(char *s, int fd);

void	ft_putendl_fd(char *s, int fd);

void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);

void	ft_lstadd_front(t_list **lst, t_list *new);

int		ft_lstsize(t_list *lst);

t_list	*ft_lstlast(t_list *lst);

void	ft_lstadd_back(t_list **lst, t_list *new);

void	ft_lstdelone(t_list *lst, void (*del)(void*));

void	ft_lstclear(t_list **lst, void (*del)(void*));

void	ft_lstiter(t_list *lst, void (*f)(void *));

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

#endif // aqui fechamos a nossa biblioteca