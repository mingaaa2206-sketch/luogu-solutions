#include <stdio.h>
int main(void) {
    int maxSum = 0;   
    int ans = 0;     
    for (int i = 1; i <= 7; i++) {
        int school, extra;
        scanf("%d %d", &school, &extra);
        int sum = school + extra;
    
        if (sum > 8 && sum > maxSum) {
            maxSum = sum;
            ans = i;
        }
    }
    printf("%d\n", ans);
    return 0;
}
