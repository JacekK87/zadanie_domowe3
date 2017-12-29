#include <stdio.h>

int nwd(int a, int b) 
{
    while (b != a)
        if (b > a)
            b = b - a;
        else
            a = a - b;
    return a;
}
int main()
{
    int a, b ;

    printf("Podaj liczbe a wieksza od 0\n");
    scanf("%d", &a);
    printf("Podaj liczbe b wieksza od 0\n");
    scanf("%d", &b);
    printf("NWD(%d i %d) = ", a, b);

    a = nwd(a, b);
    printf("%d\n", a);
    return 0;
}

