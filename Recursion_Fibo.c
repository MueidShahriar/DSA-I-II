#include <stdio.h>
int fibonacci(int n)
{
    int fib, fibA, fibB; 
    if (n == 1)
    {
        fib = 0;
        return fib;
    }
    fibA = fibonacci (n - 2);
    fibB = fibonacci (n - 1);
    fib = fibA + fibB;
    return fib;
}

int main()
{
    int term; 
    scanf("%d", &term);
    printf("%d", fibonacci(term));
    return 0;
}
