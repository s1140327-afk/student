/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int number;

    // 請使用者輸入數字，直到輸入 0 為止
    printf("請輸入一個數字（輸入 0 來結束）：\n");
    while (1) {
        scanf("%d", &number);
        if (number == 0) {
            break;  // 如果輸入 0，跳出迴圈
        }
        printf("你輸入的數字是：%d\n", number);
    }

    printf("程式結束。\n");

    return 0;
}
