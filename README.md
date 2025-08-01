## Descripción

--ft_printf-- es una reimplementación de la función `printf()` de la biblioteca estándar de C. Este proyecto forma parte del currículo de 42 School y demuestra el manejo de argumentos variables, formateo de strings, conversiones de tipos y gestión de memoria en C.

## Características

- Compatibilidad con printf: Implementa los especificadores más comunes
- Gestión de argumentos variables* Uso de `va_list`, `va_start`, `va_arg`, `va_end`
- Múltiples conversiones* Soporte para caracteres, strings, números, punteros
- Gestión robusta de memoria: Sin memory leaks
- Manejo de casos límite: Valores NULL, desbordamientos, formatos inválidos

## Especificadores Soportados

### Conversiones Obligatorias
- %c: Imprime un carácter
- %s: Imprime una string
- %p: Imprime un puntero en formato hexadecimal
- %d: Imprime un número decimal con signo
- %i: Imprime un entero con signo
- %u: Imprime un número decimal sin signo
- %x: Imprime un número hexadecimal en minúsculas
- %X: Imprime un número hexadecimal en mayúsculas
- %%: Imprime un símbolo de porcentaje literal
