# Libft

## Makefile

| Commando       	|  Accion 	|
|----------------	|----------	|
| `make`      	    | Compila .c y crea libft.a  	|
| `make bonus`      | Compila los bonus y crea libft.a  	|
| `make clean`      | Elimina .o. |
| `make flcean`     | Elimina .o y libft.a.  	|
| `make re`     	| Ejecuta el comando fclean y make.  	|

## Libft Part-1
- [`ft_isalpha`](ft_isalpha.c)	        - Valida que el carácter de entrada es alfabético.
- [`ft_isdigit`](ft_isdigit.c)          - Valida que el carácter de entrada es un dígito.
- [`ft_isalnum`](ft_isalnum.c)          - Validar que el carácter de entrada es alfabético o dígito.
- [`ft_isascii`](ft_isascii.c)          - Validar que el carácter de entrada esta dentro de la tabla ASCII.
- [`ft_isprint`](ft_isprint.c)          - Valida que el carácter de entrada es printable.
- [`ft_strlen`](ft_strlen.c)            - Devuelve la longitud de nuestra array.
- [`ft_memset`](ft_memset.c)            - Copiamos en un array el valor c un numero determinado de veces .
- [`ft_bzero`](ft_bzero.c)              - Setea n bytes a '\0' en una array. 
- [`ft_memcpy`](ft_memcpy.c)            - Copia n caracteres de src a dst.
- [`ft_memmove`](ft_memmove.c)          - Copia n caracteres de src a dst pero evitando el overlapping.
- [`ft_strlcpy`](ft_strlcpy.c)          - Copia src en dst un numero concreto de bytes.
- [`ft_strlcat`](ft_strlcat.c)          - Concatena en src en dst un numero concreto de bytes.
- [`ft_toupper`](ft_toupper.c)          - Transforma un carácter en su version mayúscula.
- [`ft_tolower`](ft_tolower.c)          - Transforma un carácter en su version minúscula.
- [`ft_strchr`](ft_strchr.c)            - Localiza un carácter en una string.
- [`ft_strrchr`](ft_strrchr.c)          - Localiza un carácter en una string en un numero de bytes.
- [`ft_strncmp`](ft_strncmp.c)          - Compara 2 strings.
- [`ft_memchr`](ft_memchr.c)            - Busca un carácter en un string.
- [`ft_memcmp`](ft_memcmp.c)            - Compara 2 areas de memoria.
- [`ft_strnstr`](ft_strnstr.c)          - Localiza una substring en una string.

## Libft Part-2
- [`ft_substr`](ft_substr.c)	        - Devuelve una substring de una string
- [`ft_strjoin`](ft_strjoin.c)	        - Concatena dos strings
- [`ft_strtrim`](ft_strtrim.c)	        - Corta un array con los valores dados.
- [`ft_split`](ft_split.c)	            - Splitea una string usando un carácter
- [`ft_itoa`](ft_itoa.c)	            - Transforma un numero en una string. 
- [`ft_strmapi`](ft_strmapi.c)          - Aplica una función a todos los caracteres de una string. 
- [`ft_putchar_fd`](ft_putchar_fd.c)	- Output un carácter por el file descriptor indicado.
- [`ft_putstr_fd`](ft_putstr_fd.c)      - Output una string por el file descriptor indicado.
- [`ft_putendl_fd`](ft_putendl_fd.c)	- Output una string por el file descriptor indicado seguido de un salto de linea.
- [`ft_putnbr_fd`](ft_putnbr_fd.c)	    - Output un numero por el file descriptor indicado. 

## Libft Bonus
- [`ft_lstnew`](ft_lstnew.c)	            - Reserva con malloc(3) y devuelve un elemento nuevo.
- [`ft_lstadd_front`](ft_lstadd_front.c)	- Añade el elemento ’new’ al principio de la lista.
- [`ft_lstsize`](ft_lstsize.c)	          - Cuenta el número de elemento de una lista
- [`ft_lstlast`](ft_lstlast.c)	          - Devuelve el último elemento de una lista.
- [`ft_lstadd_back`](ft_lstadd_back.c)	  - Añade el elemento ’new’ al final de una lista.
- [`ft_lstdelone`](ft_lstdelone.c)	      - Toma como parámetro un elemento y libera la memoria del contenido
- [`ft_lstclear`](ft_lstclear.c)	        - Elimina y libera cada uno de los elementos de la lista dada
- [`ft_lstiter`](ft_lstiter.c)	          - Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento.
- [`ft_lstmap`](ft_lstmap.c)	            - Itera la lista ’lst’ y aplica la función ’f’ al contenido de cada elemento.

[![AlbertM 42Project Score](https://badge42.herokuapp.com/api/project/amantara/Libft)](https://github.com/JaeSeoKim/badge42)

##
[![forthebadge](https://forthebadge.com/images/badges/made-with-c.svg)](https://forthebadge.com)
[![forthebadge](https://forthebadge.com/images/badges/built-with-love.svg)](https://forthebadge.com)
