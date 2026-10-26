#include <stdio.h>

int main(void)
{
    int libros_iniciales = 0;
    int libros_devueltos = 0;
    int libros_prestados = 0;
    int libros_disponibles = 0;

    if (scanf("%d %d %d",
              &libros_iniciales,
              &libros_devueltos,
              &libros_prestados) != 3)
    {
        return 1;
    }

    libros_disponibles = libros_iniciales + libros_devueltos + libros_prestados;

    printf("Libros disponibles: %d\n", libros_disponibles);
    return 0;
}
