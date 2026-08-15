*This project has been created as part of the 42 curriculum by jose-an2*

# ft_printf

## 📄 Descripción

`ft_printf` consiste en recodificar la función `printf()` de la librería estándar de C desde cero. El objetivo principal es entender y trabajar con **funciones variádicas** (número variable de argumentos), usando `va_list`, `va_start`, `va_arg`, `va_copy` y `va_end`.

Mi implementación soporta las conversiones obligatorias:

- `%c` — carácter
- `%s` — string
- `%p` — puntero en hexadecimal
- `%d` / `%i` — enteros en base 10
- `%u` — enteros sin signo en base 10
- `%x` / `%X` — hexadecimal en minúscula / mayúscula
- `%%` — signo de porcentaje literal

El resultado se empaqueta como una librería estática `libftprintf.a`, generada con `ar`.

## ⚙️ Instrucciones

Clona el repositorio y compila con `make`:

```bash
git clone <git@github.com:zeshh89/printf-42.git>
cd ft_printf
make
```

Esto genera `libftprintf.a` en la raíz del proyecto. Para usarla en tu propio código:

```c
#include "ft_printf.h"

int main(void)
{
    ft_printf("Hola, %s! Tienes %d años y tu dirección de memoria es %p\n",
               "mundo", 42, (void *)&main);
    return (0);
}
```

Compila enlazando la librería:

```bash
cc -Wall -Wextra -Werror main.c -L. -lftprintf -o test
```

Reglas del Makefile disponibles: `all`, `clean`, `fclean`, `re`.

## 🧠 Algoritmo y estructura de datos

`ft_printf` parsea el string de formato carácter a carácter. Cada vez que encuentra un `%`, entra en un modo de "parseo de conversión": identifica el especificador (`c`, `s`, `p`, `d`, `i`, `u`, `x`, `X`, `%`) y despacha la llamada a una función específica de impresión para ese tipo, usando `va_arg` para extraer el argumento correspondiente de la lista variádica.

No se usa ninguna estructura de datos compleja: al no gestionar buffering ni flags de anchura/precisión (fuera de bonus), basta con un contador de caracteres escritos y funciones auxiliares de impresión (`put_char`, `put_str`, `put_nbr`, `put_hex`, `put_ptr`) que devuelven cuántos bytes escribieron, para poder acumular el valor de retorno final tal y como hace el `printf()` original.

## 📚 Recursos

- Manual de C: `man 3 printf`, `man 3 stdarg`
- Documentación del estándar C sobre funciones variádicas (`<stdarg.h>`)
- **Uso de IA:** utilicé un asistente de IA puntualmente para resolver dudas conceptuales sobre el funcionamiento interno de `va_list` y para revisar casos límite de mis tests (por ejemplo, `%p` con puntero `NULL`). No se generó código completo con IA; toda la implementación fue escrita, entendida y depurada por mí.
