#include <stdio.h>

int main()
{
    int n;
    int i, j;
    int max_val;
    int spaces;
    int count;

    // 读取输入
    if (scanf("%d", &n) != 1)
    {
        return 1;
    }

    // 计算上半部分的最大行号（中间行的数字）
    // 例如 n=5 时，中间行数字为 3；n=3 时，中间行数字为 2
    max_val = (n + 1) / 2;

    // 第一部分：打印上半部分（包括中间的最长行）
    // i 代表当前行的数字内容，从 1 开始增加到 max_val
    for (i = 1; i <= max_val; i++)
    {
        // 计算当前行的数字个数: 1 -> 1, 2 -> 3, 3 -> 5... 公式: 2*i - 1
        count = 2 * i - 1;

        // 计算前导空格数: (总宽度 n - 当前宽度 count) / 2
        // 或者简化为: max_val - i
        spaces = max_val - i;

        // 打印空格
        for (j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // 打印数字
        for (j = 0; j < count; j++)
        {
            printf("%d", i);
        }

        // 换行
        printf("\n");
    }

    // 第二部分：打印下半部分
    // i 代表当前行的数字内容，从 max_val - 1 开始递减到 1
    for (i = max_val - 1; i >= 1; i--)
    {
        count = 2 * i - 1;
        spaces = max_val - i;

        // 打印空格
        for (j = 0; j < spaces; j++)
        {
            printf(" ");
        }

        // 打印数字
        for (j = 0; j < count; j++)
        {
            printf("%d", i);
        }

        // 换行
        printf("\n");
    }

    return 0;
}