// 使用另一个字符串来逆序字符串
#include <stdio.h>
#include <string.h>

// 定义一个函数来逆序字符串
void reverseString(char *str)
{
    // 获取字符串的长度
    int len = strlen(str);
    // 创建一个新的字符串数组
    char rev[len + 1];
    // 初始化索引变量
    int i, j;
    // 从后往前遍历原始字符串，并将其复制到新的字符串中
    for (i = len - 1, j = 0; i >= 0; i--, j++)
    {
        rev[j] = str[i];
    }
    // 在新的字符串末尾添加空字符
    rev[j] = '\0';
    // 将新的字符串复制回原始字符串
    strcpy(str, rev);
}

// 主函数
int main()
{
    // 定义一个测试用的字符串
    char str[] = "Hello World";
    // 打印原始字符串
    printf("Original string: %s\n", str);
    // 调用逆序函数
    reverseString(str);
    // 打印逆序后的字符串
    printf("Reversed string: %s\n", str);
    
}