#include <stdio.h>
#include <math.h> // 引入数学库以使用 sqrt 函数

int main() {
    double a, b, c;
    double S, area;

    // 1. 读取三角形的三边长（double类型使用 %lf）
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        return 0;
    }

    // 2. 计算半周长 S
    S = (a + b + c) / 2.0;

    // 3. 利用海伦公式计算面积 area
    area = sqrt(S * (S - a) * (S - b) * (S - c));

    // 4. 输出面积（C语言中 %f 默认输出 6 位小数，吻合样例）
    printf("%f\n", area);

    return 0;
}