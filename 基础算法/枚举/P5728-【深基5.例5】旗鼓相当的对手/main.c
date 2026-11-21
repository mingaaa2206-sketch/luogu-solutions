#include <stdio.h>
#include <stdlib.h>

int score[1005][3];

int main(void)
{
    int n;
    if (scanf("%d", &n) != 1) return 0;

    for (int i = 0; i < n; i++)
        scanf("%d %d %d", &score[i][0], &score[i][1], &score[i][2]);

    int ans = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            /* 1. 每一科的分差都不大于 5 */
            int ok = 1;
            for (int k = 0; k < 3; k++) {
                if (abs(score[i][k] - score[j][k]) > 5) { ok = 0; break; }
            }
            if (!ok) continue;

            /* 2. 总分分差不大于 10 */
            int s1 = score[i][0] + score[i][1] + score[i][2];
            int s2 = score[j][0] + score[j][1] + score[j][2];
            if (abs(s1 - s2) <= 10) ans++;
        }
    }

    printf("%d\n", ans);
    return 0;
}
