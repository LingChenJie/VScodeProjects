#include <stdio.h>
#include <string.h>

#include "add.c"

struct Stu {
    char name[20];
    int age;
    double score;
};

// int main()
// {
//     int a = 10;
//     int b = 20;
//     int sum = Add(a, b);
//     printf("%d\n", sum);
//     extern double PI;
//     printf("%f\n", PI);
//     printf("hello world\n");

//     int input = 0;
//     scanf("%d", &input);
//     printf("%d\n", input);

//     return 0;
// }
// int main()
// {
// 	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
// 	int k = 7;//要查找的数字
// 	int sz = sizeof(arr) / sizeof(arr[0]);//数组的元素个数
// 	int left = 0;
// 	int right = sz - 1;//为什么减一，因为第一个从0开始,减一后才是最右边元素下标

// 	while (left<=right)

// 	{
// 		int mid = (left + right) / 2;
// 		if (arr[mid] < k)
// 		{
// 			left = mid + 1;//加一减一画下图就明白
// 		}
// 		else if (arr[mid] > k)
// 		{
// 			right = mid - 1;
// 		}
// 		else
// 		{
// 			printf("找到了%d\n", mid);
// 			break;
// 		}
// 	}
// 	if (left > right)
// 		printf("找不到了\n");
// 	return 0;
// }

// int main()
// {
// 	int i = 0;
// 	char password[20] = { 0 };
// 	for (i = 0; i < 3; i++)
// 	{
// 		printf("请输入密码:>");
// 		scanf("%s", password);
//         //不需要特地加取地址符，因为作为数组，数组名就是地址
// 		//if(password=="123456");  错误，俩字符串不能直接比较，引用strcmp
// 		if (strcmp(password, "123456") == 0)
// 		{
// 			printf("登陆成功\n");
// 			break;
// 		}
// 	}
// 	if (i >= 3)
// 		printf("密码错误三次，已锁定");
// 	return 0;
// }

// int main() {
//     int i = 0;
//     int j = 0;
//     for(i = 1; i < 10; i++) {
//         printf("\n");
//         for(j = 1; j <= i; j++) {
//             printf("%d*%d=%2d  ", i, j, i * j);
//         }
//     }
//     return 0;
// }
// int main() {
//     char* p[] = {"ENTER", "NEW", "POINT", "FIRST"};
//     char** pp[] = {p+3, p+2, p+1, p};// "FIRST","POINT","NEW","ENTER"
//     char*** cpp = pp;//

//     printf("%s\n", **cpp);
//     printf("%s\n", cpp[1][0]);
//     printf("%s\n", cpp[2][0]);
//     printf("%s\n", cpp[3][0]);
//     printf("%s\n", "-----------------------");

//     printf("%s\n", **++cpp);// POINT
//     printf("%s\n", **cpp);
//     printf("%s\n", *--*++cpp + 3);//
//     printf("%s\n", **cpp);
//     printf("%s\n", *cpp[-2] + 3);
//     printf("%s\n", **cpp);
//     printf("%s\n", cpp[-1][-1] + 1);
//     printf("%s\n", **cpp);
//     return 0;
// }
// "ENTER",  "NEW",   "POINT", "FIRST"
// "FIRST",  "POINT", "NEW",    "ENTER"
// cpp

// int main() {
//     int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
//     printf("%lu\n", sizeof(arr));
//     printf("%lu\n", sizeof(arr[0]));
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     int i = 0;
//     for(i = 0; i < sz; i++) {
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }
int main()
{
    // //一维数组
    int a[] = {1, 2, 3, 4};
    printf("%lu\n", sizeof(a));// 16
    printf("%lu\n", sizeof(a + 0));// 4/8
    printf("%lu\n", sizeof(*a));// 4
    printf("%lu\n", sizeof(a + 1));// 4/8
    printf("%lu\n", sizeof(a[1]));// 4
    printf("%lu\n", sizeof(&a));// 4/8
    printf("%lu\n", sizeof(*&a));// 16
    printf("%lu\n", sizeof(&a + 1));// 4/8
    printf("%lu\n", sizeof(&a[0]));// 4/8
    printf("%lu\n", sizeof(&a[0] + 1));// 4/8

    //字符数组
    // char arr[] = {'a', 'b', 'c', 'd', 'e', 'f'};
    // printf("%d\n", sizeof(arr));// 6
    // printf("%d\n", sizeof(arr + 0));// 8
    // printf("%d\n", sizeof(*arr));// 1
    // printf("%d\n", sizeof(arr[1]));// 1
    // printf("%d\n", sizeof(&arr));// 8
    // printf("%d\n", sizeof(&arr + 1));// 8
    // printf("%d\n", sizeof(&arr[0] + 1));// 8
    // printf("%d\n", strlen(arr));// 随机
    // printf("%d\n", strlen(arr + 0));// 随机
    //printf("%d\n", strlen(*arr));// 出错
    //printf("%d\n", strlen(arr[1]));// 出错
    // printf("%d\n", strlen(&arr));// 随机
    // printf("%d\n", strlen(&arr + 1));// 随机
    // printf("%d\n", strlen(&arr[0] + 1));// 随机

    // char arr[] = "abcdef";
    // printf("%d\n", sizeof(arr));// 7
    // printf("%d\n", sizeof(arr + 0));// 8
    // printf("%d\n", sizeof(*arr));// 1
    // printf("%d\n", sizeof(arr[1]));// 1
    // printf("%d\n", sizeof(&arr));// 8
    // printf("%d\n", sizeof(&arr + 1));// 8
    // printf("%d\n", sizeof(&arr[0] + 1));// 8
    // printf("%d\n", strlen(arr));// 6
    // printf("%d\n", strlen(arr + 0));// 6
    //printf("%d\n", strlen(*arr));// 出错
    //printf("%d\n", strlen(arr[1]));// 出错
    // printf("%d\n", strlen(&arr));// 6
    // printf("%d\n", strlen(&arr + 1));// 随机
    // printf("%d\n", strlen(&arr[0] + 1));// 5


    // int i = 3.12;
    // printf("%d\n", i);
    // return 0;

    // printf("%d\n", sizeof(int*));
    // printf("%d\n", sizeof(char*));
    // return 0;

    // struct Stu s = {"hello", 1, 1.21};
    // printf("%s %d %lf\n", s.name, s.age, s.score);

    // struct Stu * ps = &s;
    // printf("%s %d %lf\n", (*ps).name, (*ps).age, (*ps).score);

    // printf("%s %d %lf\n", ps->name, ps->age, ps->score);

    char arr[] = {'h', 'e', 'l'};

    return 0;
    
}