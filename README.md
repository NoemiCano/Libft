*Este proyecto ha sido creado como parte del currículo de 42 por ncano-co.*

# Descripción
El proyecto **Libft** es el primer reto del Cursus de **42**. 

Su objetivo principal es comprender como actúan estas funciones, implementarlas por mi cuenta y aprender a utilizarlas de forma eficaz.

He replicado funciones de la librería estándar de C (`libc`), manteniendo los prototipos y comportamientos de las funciones originales, siguiendo fielmente las definiciones indicadas en la página del `man` de cada función. La única diferencia es el prefijo `ft_`.

Además, he implementado otras funciones adicionales de utilidad general, que no son de la librería `libc`. Y, también he incluido funciones para manejar memoria y cadenas manejando listas enlazadas.

Este proyecto permite comprender los fundamentos de la programación en bajo nivel en lenguaje C, la gestión de memoria dinámica, el manejo de punteros y la estructuración de librerías estáticas mediante archivos cabecera (`.h`) y el comando `ar`. Todo el código cumple estrictamente con las reglas de la **Norminette** de 42 y está libre de *memory leaks*.

# Instrucciones

## Requisitos previos

Para poder compilar y probar este proyecto necesitas un entorno de desarrollo Unix/Linux o macOS con las siguientes herramientas instaladas:
* **Compilador de C:** `gcc`
* **Herramienta de automatización:** `make`
* **Archivador de librerías:** `ar`
---
## Compilación de la librería

Clona primero el repositorio:
```bash
git clone (https://github.com/NoemiCano/Libft.git)
cd Libft

Para compilar utiliza el comando:
make

# Recursos
"Recursos"que enumere referencias clásicas relacionadas con el tema (documentación, artículos, tutoriales, etc.), así como una descripción del uso de IA, especificando para qué tareas y en qué partes del proyecto se ha utilizado


debe incluirse una descripción detallada de la librería creada para este
proyecto


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