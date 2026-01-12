#include <stdio.h>
#include "database.h"

int main() {
    printf("测试：MiniDBMS 配置成功！\n");
    printf("如果看到这行，说明头文件包含正常。\n");

    // 简单测试
#ifdef _CRT_SECURE_NO_WARNINGS
    printf("安全检查已关闭\n");
#endif

    printf("\n按回车键退出...");
    getchar();

    return 0;
}