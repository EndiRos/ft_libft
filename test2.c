
#include <stdio.h>
#include <stdlib.h>
#include "ft_libft.h"

int main(void)
{
    int num = -1234512312;
    char *result = ft_itoa(num);

    if (result != NULL)
    {
        printf("Resultado: %s\n", result);
        free(result);
    }
    else
    {
        printf("Error en la conversión.\n");
    }

    return 0;
}
