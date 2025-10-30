#include <stdio.h>
#include <math.h>

int main()
{
    int n;
    float s;
hi:
    printf("Enter n value
");
    scanf("%d", &n);
    if (n < 0)
        goto hi;
    s = sqrt(n);
    printf("Square root is = %.2f", s);
    return 0;
}
