# P1177 【模板】排序

> 洛谷原题：[P1177 【模板】排序](https://www.luogu.com.cn/problem/P1177)

| 项目 | 值 |
| --- | --- |
| 难度 | 普及− |
| 算法分类 | 排序 |
| 来源标签 | 模板题 |
| 通过 / 提交 | 405975 / 1245087 |
| 我的通过记录 | [记录 308339312](https://www.luogu.com.cn/record/308339312) · 2026-11-06 20:19 · C · 78ms / 1.0MB |
| 仓库归档 | `基础算法/排序/P1177-【模板】排序` |

## 题目描述

将读入的 $N$ 个数从小到大排序后输出。

## 输入格式

第一行为一个正整数 $N$。

第二行包含 $N$ 个空格隔开的正整数 $a_i$，为你需要进行排序的数。

## 输出格式

将给定的 $N$ 个数从小到大输出，数之间空格隔开。

## 样例

### 样例 #1

输入：

```text
5
4 2 4 5 1
```

输出：

```text
1 2 4 4 5
```

## 提示

对于 $20\%$ 的数据，有 $1 \leq N \leq 10^3$；

对于 $100\%$ 的数据，有 $1 \leq N \leq 10^5$，$1 \le a_i \le 10^9$。

## 我的代码（C，AC）

源码文件：`main.c`

```c
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
```

---

题面版权归 [洛谷](https://www.luogu.com.cn/) 及原出题人所有，此处仅作个人学习归档。
