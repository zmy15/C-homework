#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

void convertAndPrint(int base, long int num) {
    switch (base) {
    case 8:
        printf("十进制为：%ld\n", num);
        printf("十六进制为：%lx\n", num);
        break;
    case 10:
        printf("八进制为：%lo\n", num);
        printf("十六进制为：%lx\n", num);
        break;
    case 16:
        printf("八进制为：%lo\n", num);
        printf("十进制为：%ld\n", num);
        break;
    default:
        printf("不支持的进制\n");
    }
}

int main() {
    int base;
    long int num;

    while (1) {
        printf("请输入进制数，例如：8 10 16\n");
        if (scanf_s("%d", &base) != 1 || (base != 8 && base != 10 && base != 16)) {
            printf("输入错误,");
            while (getchar() != '\n'); // 清除输入缓冲区
            continue; // 重新循环
        }

        while (1) {
            printf("请输入要转换的数 (输入负数退出)：\n");
            if (base == 8) {
                if (scanf_s("%lo", &num) != 1) {
                    printf("输入无效，请重新输入\n");
                    while (getchar() != '\n'); // 清除输入缓冲区
                    continue; // 重新循环
                }
            }
            else if (base == 10) {
                if (scanf_s("%ld", &num) != 1) {
                    printf("输入无效，请重新输入\n");
                    while (getchar() != '\n'); // 清除输入缓冲区
                    continue; // 重新循环
                }
            }
            else if (base == 16) {
                if (scanf_s("%lx", &num) != 1) {
                    printf("输入无效，请重新输入\n");
                    while (getchar() != '\n'); // 清除输入缓冲区
                    continue; // 重新循环
                }
            }

            if (num < 0) {
                return 0; // 输入负数退出程序
            }

            convertAndPrint(base, num);
        }
    }

    system("pause");
    return 0;
}
