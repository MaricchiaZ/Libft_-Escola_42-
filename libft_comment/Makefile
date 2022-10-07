SRCS	= ft_bzero.c ft_isalpha.c ft_isascii.c ft_isdigit.c \
 ft_isprint.c ft_memcpy.c ft_memset.c ft_strlen.c ft_isalnum.c \
 ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_toupper.c ft_tolower.c \
 ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_calloc.c \
 ft_strdup.c ft_strjoin.c ft_strnstr.c ft_substr.c ft_atoi.c ft_memcmp.c \
 ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c \
 ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \ #aqui contém todos os nomes
 #dos arquivos que formarão a biblioteca (essa é a parte obrigatória)

BONUS	=  ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
 ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c #aqui contém todos os nomes
 #dos arquivos que formarão a parte bônus da biblioteca (essa regra é pedida nas diretrizes da tarefa)

HEADERS	= ./libft.h # indica que o cabeçalho está nessa mesma pasta (./), no arquivo libft.h

OBJS	= ${SRCS:.c=.o} #os objetos serão formados por o que existe em SRCS, mantendo o nome
# mas trocando o .c por .o

BONUS_OBJS	= ${BONUS:.c=.o} #os objetos aqui serão formados por o que existe em BONUS, mantendo 
#o nome mas trocando o .c por .o

NAME	= libft.a   # o nome para a biblioteca criada será libft.a

RM	= rm -f # para remover, usaremos rm com -f (force), ignora ficheiros e argumentos inexistentes

.c.o: # faz um arquivo.o a partir de um arquivo.c é a mesma coisa que:  %.o: %.c 
# os arquivos-fonte que compõem a biblioteca devem ser compilados, para gerar os arquivos-objeto 
# correspondentes
# é complilado usando o compilador gcc e usamos as flags
# -Wall -Wextra -Werror, possibilita os avisos
# -c a opção diz para não executar o linker, então ela forma os .o, objetos produzidos pelo assembler.
# $< pega o que está a direita da regra, no caso .c e passa para a esquerda
# -I inclui os que está contido em HEADERS (no caso a libft.a)
# -o orienta o output ${<:.c=.o} esse padrão indica que mantém-se os nomes apenas trocando .c para .o
	gcc -Wall -Wextra -Werror -g -c $< -I ${HEADERS} -o ${<:.c=.o}

all: ${NAME} # all: É o nome das regras a serem executadas

${NAME}:	${OBJS}
 # -deve ser usado o utilitário "ar" (archiver) para juntar todos os 
 # -arquivos-objeto em uma biblioteca estática chamada "libft.a"
 # -as flags -r, insere o arquivo membro... no arquivo (com substituição) / -c, criar o arquivo, e quando
 # se atualiza, cria o arquivo se ele não existir / -s, escreve um índice de ficheiro objeto no arquivo, 
 #ou atualiza um já existente, mesmo que nenhuma outra alteração seja feita no arquivo. 
 # -usamos a ar para compactar no arquivo (libft.a) local, os arquivos da SRCS mas com esses arquivos bônus
 # -como a instrução abaixo está subordinada ao name e aos objs ela só ocorre se houve modificações
 # evitando assim relink
	ar -rcs ${NAME} ${OBJS}

bonus:	${BONUS_OBJS} # -aqui usamos os objetos presentes no bônus
# e compactamos no mesmo arquivo (libft.a), mas com esses arquivos bônus
# -refaz as regras da linha 39 e 46, mas trocando os ${OBJS} por ${BONUS_OBJS} 
	make OBJS="${BONUS_OBJS}" --no-print-directory 

clean: # -Apaga os arquivos intermediários. Se você escrever make clean no terminal
# -usamos as rediretrizes de RM para remover os objetos da srcs e os objetos do bonus
	${RM} ${OBJS} ${BONUS_OBJS} 

fclean:	clean #-realiza a regra clean
# -e remove também o nome
	${RM} ${NAME} 

re: fclean all #-deleta e recomplila tudo (se mexermos em algum arquivo podemos dar make re)

.PHONY:	all clean fclean re # -Esta regra permite de evitar conflitos. é uma proteção, se tiver 
# um arqiuvo com o mesmo nome de uma das regras, a regra deve ser executada, mesmo se existirem 
# arquivos com o nome dela.

# significado dos símbolos
 #   $@    Nome da regra. 
 #   $<    Nome da primeira dependência 
 #   $^ 	Lista de dependências
 #   $? 	Lista de dependências mais recentes que a regra.
 #   $* 	Nome do arquivo sem sufixo