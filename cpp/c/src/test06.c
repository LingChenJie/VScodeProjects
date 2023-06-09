#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    char *str;
    /* 最初的内存分配 */
    str = (char*)malloc(15);
    strcpy(str, "runoob");
    printf("String = %s, Address = %u, size:%d\n", str, str, sizeof(str));

    /* 重新分配内存 */
    str = (char*)realloc(str, 25);
    strcat(str, ".com");
    printf("String = %s, Address = %u, size:%d\n", str, str, sizeof(str)); 
    
    free(str);

    return 0;
}