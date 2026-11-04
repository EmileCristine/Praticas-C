#include <stdio.h>

int funcao1(int a, int b)
{
    int c;
    a = b - a;
    b = a + b;
    c = a + b;
    printf("a = %d  b = %d  c = %d\n", a, b, c);
    return c;
}

int main()
{
    int a, b, c, d, e;
    a = 6;
    b = a + 7;
    c = 4;
    d = 9;
    printf("a = %d  b = %d  c = %d  d = %d\n", a, b, c, d);
    e = funcao1(c, d);
    printf("a = %d  b = %d  c = %d  d = %d  e = %d\n", a, b, c, d, e);
    e = funcao1(a, b);
    printf("a = %d  b = %d  c = %d  d = %d  e = %d\n", a, b, c, d, e);
    c = funcao1(e, d);
    printf("a = %d  b = %d  c = %d  d = %d  e = %d\n", a, b, c, d, e);
    return 0;
}