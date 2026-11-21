#include <stdio.h>

int main(void) {
    int n, m;
    int a[100][100];

    scanf("%d %d", &n, &m);

    // 输入原矩阵
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            scanf("%d", &a[row][col]);
        }
    }

    // 原矩阵每一列，变成旋转后的一行
    for (int col = 0; col < m; col++) {
        // 从当前列的最底行往上读
        for (int row = n - 1; row >= 0; row--) {
            printf("%d", a[row][col]);

            // 元素之间输出空格，行末不输出多余空格
            if (row > 0) {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
