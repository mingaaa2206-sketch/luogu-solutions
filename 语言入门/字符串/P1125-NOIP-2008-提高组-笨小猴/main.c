#include <iostream>
#include <cstring>
using namespace std;


// 判断质数函数
bool isPrime(int x) {
    if (x < 2) return false; // 0 和 1 都不是质数
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}


int main() {
    char word[105];
    cin >> word;


    // 1. 统计 26 个字母出现次数
    int cnt[26] = {0};
    int len = strlen(word);
    for (int i = 0; i < len; i++) {
        cnt[word[i] - 'a']++;
    }


    // 2. 求最大出现次数 maxn 和最小出现次数 minn
    int maxn = 0;
    int minn = 105; // 单词长度小于 100，初值设为比 100 大的数
    for (int i = 0; i < 26; i++) {
        if (cnt[i] > maxn) {
            maxn = cnt[i];
        }
        if (cnt[i] > 0 && cnt[i] < minn) { // 注意 cnt[i] > 0
            minn = cnt[i];
        }
    }


    // 3. 判断差值是否为质数并按格式输出
    int diff = maxn - minn;
    if (isPrime(diff)) {
        cout << "Lucky Word\n" << diff << "\n";
    } else {
        cout << "No Answer\n0\n";
    }


    return 0;
}
