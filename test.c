/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: enetxeba <enetxeba@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:35:26 by enetxeba          #+#    #+#             */
/*   Updated: 2024/11/27 13:05:08 by enetxeba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "ft_libft.h"  // Incluimos el archivo de cabecera donde están las declaraciones

int main() {
    // Ejemplo para ft_bzero y bzero
    char str1[20] = "Hello, World!";
    ft_bzero(str1, 5);
    printf("ft_bzero result: %s\n", str1);  // "     World!"

    // Ejemplo para ft_isalnum y isalnum
    printf("ft_isalnum('A'): %d\n", ft_isalnum('A')); // 1 (es alfanumérico)
    printf("isalnum('A'): %d\n", isalnum('A')); // 1 (es alfanumérico)

    // Ejemplo para ft_isalpha y isalpha
    printf("ft_isalpha('A'): %d\n", ft_isalpha('A')); // 1 (es alfabético)
    printf("isalpha('A'): %d\n", isalpha('A')); // 1 (es alfabético)

    // Ejemplo para ft_isascii y isascii
    printf("ft_isascii('A'): %d\n", ft_isascii('A')); // 1 (es ASCII)
    printf("isascii('A'): %d\n", isascii('A')); // 1 (es ASCII)

    // Ejemplo para ft_isdigit y isdigit
    printf("ft_isdigit('7'): %d\n", ft_isdigit('7')); // 1 (es dígito)
    printf("isdigit('7'): %d\n", isdigit('7')); // 1 (es dígito)

    // Ejemplo para ft_isprint y isprint
    printf("ft_isprint(' '): %d\n", ft_isprint(' ')); // 1 (es imprimible)
    printf("isprint(' '): %d\n", isprint(' ')); // 1 (es imprimible)

    // Ejemplo para ft_memcpy y memcpy
    char src[] = "Source String";
    char dest[20];
    ft_memcpy(dest, src, 14);
    printf("ft_memcpy result: %s\n", dest);  // "Source String"

    // Ejemplo para ft_memmove y memmove
    char src2[] = "Hello World!";
    ft_memmove(src2 + 6, src2, 6);
    printf("ft_memmove result: %s\n", src2);  // "Hello Hello!"

    // Ejemplo para ft_memset y memset
    char str2[20] = "Original String";
    ft_memset(str2, 'X', 8);
    printf("ft_memset result: %s\n", str2);  // "XXXXX String"

    // Ejemplo para ft_strlen y strlen
    printf("ft_strlen('Hello'): %zu\n", ft_strlen("Hello")); // 5
    printf("strlen('Hello'): %zu\n", strlen("Hello")); // 5

    // Ejemplo para ft_strlcpy y strlcpy
    char first[] = "This is ";
    char last[] = "a potentially long string";
    int r;
    int size = 16;
    char buffer[size];

    ft_strlcpy(buffer,first,size);
    printf ("dest2 result tras strlcpy: %s \n" , buffer);
    r = ft_strlcat(buffer,last,size);
    printf("strlcat result: %d\n",r);
    printf ("dest2 result tras strlcat: %s \n" , buffer);

    

    // Ejemplo para ft_strlcat y strlcat
    //printf("strlcat result: %u\n", strlcat(dest2, " World!", 20)); // 12

    // Ejemplo para ft_toupper y toupper
    printf("ft_toupper('a'): %d\n", ft_toupper('a')); // 'A'
    printf("toupper('a'): %d\n", toupper('a')); // 'A'

    // Ejemplo para ft_tolower y tolower
    //printf("ft_tolower('A'): %d\n", ft_tolower('A')); // 'a'
    printf("tolower('A'): %d\n", tolower('A')); // 'a'

    // Ejemplo para ft_strchr y strchr
    printf("ft_strchr('Hello World!', 'o'): %s\n", ft_strchr("Hello World!", 'o')); // "o World!"
    printf("strchr('Hello World!', 'o'): %s\n", strchr("Hello World!", 'o')); // "o World!"

    // Ejemplo para ft_strncmp y strncmp
    printf("ft_strncmp('Hello', 'Hetlo', 5): %d\n", ft_strncmp("Hetlo", "Hello", 5)); // 0
    printf("strncmp('Hello', 'Hetlo', 5): %d\n", strncmp("Hetlo", "Hello", 5)); // 0

    // Ejemplo para ft_memcmp y memcmp
    printf("ft_memcmp('Hello', 'Hello', 5): %d\n", ft_memcmp("Hetlo", "Hello", 5)); // 0
    printf("memcmp('Hello', 'Hello', 5): %d\n", memcmp("Hetlo", "Hello", 5)); // 0

    // Ejemplo para ft_strnstr y strnstr
    printf("ft_strnstr('Hello World!', 'World', 13): %s\n", ft_strnstr("Hello World!", "World", 13)); // "World!"
    //printf("strnstr('Hello World!', 'World', 13): %s\n", strnstr("Hello World!", "World", 13)); // "World!"

    // Ejemplo para ft_atoi y atoi
    printf("ft_atoi('42'): %d\n", ft_atoi("-42")); // 42
    printf("atoi('42'): %d\n", atoi("42")); // 42

    // Ejemplo para ft_calloc y calloc
    int *arr = (int *)ft_calloc(5, sizeof(int));
    printf("ft_calloc result (5 ints): %d\n", arr[0]); // 0 (memoria cero)
    free(arr);

    // Ejemplo para ft_strdup y strdup
    char *dup_str = ft_strdup("Hello World!");
    printf("ft_strdup result: %s\n", dup_str); // "Hello World!"
    free(dup_str);

    return 0;
}
