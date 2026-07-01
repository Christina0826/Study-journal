#include <stdio.h>

// 辅助函数：判断数字中是否包含数字 1
int hasOne(int num) {
    while (num > 0) {
        if (num % 10 == 1) {
            return 1;
        }
        num /= 10;
    }
    return 0;
}

int main() {
    // 每个月的天数（平年，2月28天，下标0不用）
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    
    // 2025年1月1日是星期三
    int weekday = 3; 
    
    int total_distance = 0;

    // 模拟 1 月到 12 月
    for (int month = 1; month <= 12; month++) {
        for (int day = 1; day <= days_in_month[month]; day++) {
            
            // 判断规则：月份含1，或者日期含1，或者星期为1（星期一）
            if (hasOne(month) || hasOne(day) || weekday == 1) {
                total_distance += 5;
            } else {
                total_distance += 1;
            }
            
            // 星期递增（1到7循环）
            weekday++;
            if (weekday > 7) {
                weekday = 1;
            }
        }
    }

    // 输出最终计算结果
    printf("%d\n", total_distance);

    return 0;
}