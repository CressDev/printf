#include "libftprintf.h"

int	main()
{
	char				pruebachar = 'a';
	char				pruebastr[] = "abcde";
	int					prueba_hex = -255;
	int					*str = &prueba_hex;
	unsigned int		prueba_un = 30;
	unsigned int		prueba_un1 = 50;
	int					count;

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
	count = printf("Hello %s, number: %d, hex: %x, ptr: %p\n", "world", 42, 255, &prueba_hex);
	printf("Total caracteres impresos: %d\n", count);
	count = ft_printf("Hello %s, number: %d, hex: %x, ptr: %p\n", "world", 42, 255, &prueba_hex);
	ft_printf("Total caracteres impresos: %d\n", count);
	
	return (0);
}