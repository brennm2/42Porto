#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    size_t i;
    unsigned char   *str;
    i = 0;
    str = (unsigned char *)s;
    while(i < n)
    {
        str[i] = c;
        i++;
    }
    return (s);
}

#include <stdlib.h>
#include <stdio.h>
int main(int ac, char **av)
{
    if (ac == 4)
    {
        printf("%s\n", ft_memset(av[1], atoi(av[2]), atoi(av[3])));
    }
    return (0);
}