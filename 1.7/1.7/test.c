#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
//int  find_check(int arr[3][3], int* px, int* py, int k)
//{//�β���ʵ�ε�һ�ݿ�������ֵ��ͨ�����βεĸı䲻��Ӱ��ʵ�Σ�����ַ���룬����ͨ�����βεĸı���ı�ʵ��
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
////Ϊ�˰�ֵ���������������빦�����д��ع��� ���ܷ��ع���
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
//		printf("�ҵ���,�±��� %d %d\n", x, y);
//	}
//	else
//		printf("�Ҳ���\n");
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
//		//�����ַ���
//		//��һ�����ѵ�һ���ַ����ߣ�
//		char tmp = arr[0];
//		//�ڶ������Ѻ�����ַ�����ǰ��λ
//		int j;
//		for (j = 0; j < len - 1; j++)
//		{
//			arr[j] = arr[j + 1];
//		}
//		//���������ѵ�һ���ַ�Ų�������
//		arr[len - 1] = tmp;
//		//Ҫ��תk�Σ���ѭ��k��
//	}
//}
//�����ַ�����
//���������
//�������ұ�
//����������
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
//	//1.���������
//	reserve(arr, arr + k - 1);
//	//2.�������ұ�
//	reserve(arr + k, arr + len - 1);
//	//3.�����������
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
////�ж�һ���ַ����Ƿ�����һ���ַ�����ת������;
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
//	//��arr1ÿ�ζ�����һ�¿���û�п�����arr2���
//	//����Ĵ�����arr1��arr2�ĳ��Ⱦ���
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
//strncat-->׷�Ӻ���
//int main()
//{
//	char arr[20] = "hello ";
//	strncat(arr, "world",3);
//	printf("%s", arr);
//	return 0;
//}
//strstr ---����
//����arr1�ַ����в���arr2�Ƿ����
//��������򷵻�arr2��arr1�еĵ�ַ
//����������򷵻�NULL;
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
//	//�ַ�����ӡ֪����ʼ��ַ���ɴ�ӡ��\0ֹͣ
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
	//��arr1��׷���Լ�һ��Ȼ��arr2�Ƿ���arr1
	//���ִ�
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