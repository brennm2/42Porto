char *ft_strchr(const char *s, int c)
{
    int     i;
    char    *str;

    *s = str;
    i = 0;
    while (s[i])
    {
        if(s[i] == c)
        { 
            while (s[i])
            {
                s[i] = str[i];
                i++;
            }
        
        }
        i++;
    }
    return (str);
}

#include <stdio.h>
int main (void)
{
    char    str[] = "Vasco da Gama";
    int     c = 'd';

    printf("%s\n", ft_strchr(str, c));
    return (0);
}