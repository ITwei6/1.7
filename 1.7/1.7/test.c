#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int  find_check(int arr[3][3], int* px, int* py, int k)
//{//形参是实参的一份拷贝，传值，通过对形参的改变不会影响实参，而传址输入，可以通过对形参的改变而改变实参
//	int x = 0;
//	int y = *px - 1;
//	while (x<=*px-1&&y>=0)
//	{
//		if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else
//		{
//			
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	return 0;
//	
//}
////为了把值带出来，既有输入功能又有带回功能 接受返回功能
//int main()
//{
//
//	int arr[3][3] = { 1,2,3,4,5,6,7,8,9 };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//	int ret=find_check(arr,&x,&y,k);
//	if (ret == 1)
//	{
//		printf("找到了,下标是 %d %d\n", x, y);
//	}
//	else
//		printf("找不到\n");
//	
//	return 0;
//}
//void left_reverse(char arr[], int k)
//{
//	size_t len = strlen(arr);
//	k %= len;
//	int i;
//	for (i = 0; i < k; i++)
//	{
//		//左旋字符串
//		//第一步，把第一个字符拿走；
//		char tmp = arr[0];
//		//第二步，把后面的字符串往前移位
//		int j;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//第三步，把第一个字符挪到最后面
//		arr[len - 1] = tmp;
//		//要旋转k次，就循环k次
//	}
//}
//逆序字符串：
//先逆序左边
//再逆序右边
//再整体逆序
//#include <assert.h>
//void reserve(char *left,char *right)
//{
//	assert(left);
//	assert(right);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void left_reverse(char arr[], int k)
//{
//	size_t len = strlen(arr);
//	//1.先逆序左边
//	reserve(arr, arr + k - 1);
//	//2.再逆序右边
//	reserve(arr + k, arr + len - 1);
//	//3.最后总体逆序
//	reserve(arr, arr + len - 1);
//}
////}int main()
////{
////	char arr[] = "abcdef";
////	int k = 0;
////	scanf("%d", &k);
////	left_reverse(arr, k);
////	printf("%s", arr);
////	return 0;
////}
////判断一个字符串是否是另一个字符串逆转而来的;
//int is_left_move(char arr1[], char arr2[])
//{
//	size_t len1 = strlen(arr1);
//	size_t len2 = strlen(arr2);
//	if (len1 != len2)
//	{
//		return 0;
//	}
//	else
//	{
//		int i;
//		for (i = 0; i < len1; i++)
//		{
//			left_reverse(arr1, 1);
//			if (strcmp(arr1, arr2) == 0)
//			{
//				return 1;
//			}
//		}
//		return 0;
//	}
//	//让arr1每次都逆序一下看有没有可能与arr2相等
//	//逆序的次数右arr1和arr2的长度决定
//}
//int main()
//{
//	char arr1[] = "AABBCCDD";
//	char arr2[] = "BBCCBDAA";
//	int ret=is_left_move(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("YES\n");
//	}
//	else
//		printf("NO\n");
//	return 0;
//}
//strncat-->追加函数
//int main()
//{
//	char arr[20] = "hello ";
//	strncat(arr, "world",3);
//	printf("%s", arr);
//	return 0;
//}
//strstr ---功能
//是在arr1字符串中查找arr2是否存在
//如果存在则返回arr2在arr1中的地址
//如果不存在则返回NULL;
//int main()
//{
//	char arr1[] = "abcdefabcdef";
//	char arr2[] = "cde";
//	char*ret=strstr(arr1, arr2);
//	if (ret == NULL)
//	{
//		printf("NO\n");
//	}
//	printf("%s", ret);
//	//字符串打印知道其始地址即可打印到\0停止
//	return 0;
//}
int is_right(char arr1[20], char arr2[])
{
	size_t len1 = strlen(arr1);
	size_t len2 = strlen(arr2);
	if (len1 != len2)
	{
		return 0;
	}
	else
	{
		strncat(arr1, arr1, len1);
		char* ret = strstr(arr1, arr2);
		if (ret == NULL)
			return 0;
		else
			return 1;
	}
}
int main()
{
	char arr1[20] = "abc";
	char arr2[] = "cab";
	//给arr1再追加自己一份然后看arr2是否是arr1
	//的字串
	int ret=is_right(arr1, arr2);
	if (ret == 1)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	return 0;
}