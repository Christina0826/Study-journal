#include <stdio.h>

int main() {
    int n;
    int prices[10000];

    // 1. 读取数组的大小 N
    if (scanf("%d", &n) != 1) {
        return 0;
    }

    // 2. 读取 N 个价格元素
    for (int i = 0; i < n; i++) {
        scanf("%d", &prices[i]);
    }

    // 如果价格天数小于 2 天，无法完成交易
    if (n < 2) {
        printf("0\n");
        return 0;
    }

    // 3. 贪心算法求最大利润
    int min_price = prices[0]; // 初始最低买入价格为第一天的价格
    int max_profit = 0;        // 初始最大利润为 0

    for (int i = 1; i < n; i++) {
        if (prices[i] < min_price) {
            // 找到了更低的买入价格，更新最低价
            min_price = prices[i];
        } else if (prices[i] - min_price > max_profit) {
            // 如果在今天卖出能赚更多钱，更新最大利润
            max_profit = prices[i] - min_price;
        }
    }

    // 4. 输出最终的最大利润
    printf("%d\n", max_profit);

    return 0;
}