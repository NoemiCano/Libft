<h1 align="center">
	📚 Libft - @42
</h1>

<p align="center">
	<b><i>Mi primera biblioteca propia en C</i></b>
</p>

<p align="center">
	<img src="https://img.shields.io/badge/Score-125%2F100-success?style=for-the-badge&logo=42" alt="Score 125/100" />
	<img src="https://img.shields.io/badge/Language-C-blue?style=for-the-badge&logo=c" alt="Language C" />
</p>

---

## 📌 Acerca del proyecto

El proyecto **Libft** es el primer proyecto en el Cursus de **42**. Su objetivo es reprogramar un conjunto de funciones de la librería estándar de C (`libc`), así como otras funciones de utilidad que se utilizarán a lo largo de los siguientes proyectos de la carrera.

Comprender cómo funcionan estas funciones a bajo nivel, la gestión de memoria y el uso de punteros es fundamental para construir una base sólida en C.

> **Nota:** El proyecto respeta al 100% la **Norminette** (norma de código interna de 42) y no presenta *memory leaks*.

---

## 🛠️ Contenido de la librería

El proyecto se divide en tres partes principales:

### 1. Funciones de la `libc` reescritas
Funciones estándar para manipulación de memoria y cadenas, con el prefijo `ft_`:

* **Memorias:** `ft_memset`, `ft_bzero`, `ft_memcpy`, `ft_memmove`, `ft_memchr`, `ft_memcmp`, `ft_calloc`
* **Cadenas:** `ft_strlen`, `ft_strlcpy`, `ft_strlcat`, `ft_strchr`, `ft_strrchr`, `ft_strncmp`, `ft_strnstr`, `ft_strdup`
* **Verificación y conversión de caracteres:** `ft_isalpha`, `ft_isdigit`, `ft_isalnum`, `ft_isascii`, `ft_isprint`, `ft_toupper`, `ft_tolower`, `ft_atoi`

### 2. Funciones adicionales
Funciones no incluidas en la `libc` estándar o en formato modificado:

* `ft_substr` - Extrae una subcadena de un string.
* `ft_strjoin` - Concatena dos strings en una nueva memoria reservada.
* `ft_strtrim` - Elimina caracteres específicos al principio y final de un string.
* `ft_split` - Divide un string usando un carácter delimitador y devuelve un array de strings.
* `ft_itoa` - Convierte un número entero a string.
* `ft_strmapi` - Aplica una función a cada carácter de un string para crear uno nuevo.
* `ft_striteri` - Aplica una función a cada carácter de un string (por referencia).
* `ft_putchar_fd` - Escribe un carácter en un *file descriptor*.
* `ft_putstr_fd` - Escribe una cadena en un *file descriptor*.
* `ft_putendl_fd` - Escribe una cadena con salto de línea en un *file descriptor*.
* `ft_putnbr_fd` - Escribe un número en un *file descriptor*.

### 3. Parte Bonus (Listas Enlazadas)
Funciones para manipular estructuras de listas enlazadas (`t_list`):

* `ft_lstnew`, `ft_lstadd_front`, `ft_lstsize`, `ft_lstlast`, `ft_lstadd_back`, `ft_lstdelone`, `ft_lstclear`, `ft_lstiter`, `ft_lstmap`

---

## 🚀 Uso e Instalación

### Requisitos previos
* Compilador `gcc` o `clang`
* Herramienta `make`

### Compilación

Para compilar la biblioteca mandatoria:
```bash
make