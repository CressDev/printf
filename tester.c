#include "libftprintf.h"

int	main()
{
	char				pruebachar = 'a';
	char				pruebastr[] = "abcde";
	int					prueba_hex = -255;
	int					*str = &prueba_hex;
	unsigned int		prueba_un = 30;
	unsigned int		prueba_un1 = 50;
	int					chars_count;

	printf("%u\n", prueba_un);
	ft_printf("%u\n",prueba_un);
	printf("%u\n", prueba_un1);
	ft_printf("%u\n",prueba_un1);
	printf("%c\n", pruebachar);
	ft_printf("%c\n", pruebachar);
	printf("%3s\n", pruebastr);
	ft_printf("%s\n", pruebastr);
	printf("%%\n");
	ft_printf("%% \n");
	printf("%i\n", 6);
	ft_printf("%i\n", 6);
	printf("%i\n", 8);
	ft_printf("%i\n", 8);
	printf("%x\n", prueba_hex);
	ft_printf("%x\n", prueba_hex);
	printf("%X\n", prueba_hex);
	ft_printf("%X\n", prueba_hex);
	printf("%p\n", &str);
	ft_printf("%p\n", &str);
	chars_count = printf("%s, %d, %x, %p\n", pruebastr, prueba_hex, prueba_hex, &prueba_hex);
	printf("Total caracteres %d\n", chars_count);
	chars_count = ft_printf("%s, %d, %x, %p\n", pruebastr, prueba_hex, prueba_hex, &prueba_hex);
	ft_printf("Total caracteres  %d\n", chars_count);
	return (0);
}