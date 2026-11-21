#include <stdio.h>

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;  /* 保险栓：没读到就退出 */

 int sum = 0;
int i = 1;              /* 计数器要在循环外先备好 */

while (i <= n)
{
    sum += i;
    i++;                /* 千万别忘，否则死循环 */
}

printf("%d\n", sum);


    return 0;
}
