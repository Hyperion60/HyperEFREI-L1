#include <stdio.h>

int main()
{
    char a;

    for (a = 'A'; a <= 'Z'; a++)
    {
        printf("caractere %c code %d\n", a, a);
    }


    for (a = '0'; a <= '9'; a++)
    {
        printf("caractere %c code %d\n", a, a);
    }

    return 0;
}
