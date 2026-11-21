#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b)
{
    int x = *(int *)a;
    int y = *(int *)b;

    return (x > y) - (x < y);
}

int main()
{
    int n;
    int a[100005];

    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    qsort(a, n, sizeof(int), cmp);

    for (int i = 0; i < n; i++)
    {
        printf("%d", a[i]);

        if (i < n - 1)
        {
            printf(" ");
        }
    }

    printf("\n");

    return 0;
}
