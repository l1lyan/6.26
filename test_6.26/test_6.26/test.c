#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//int main()
//{
//	int arr[10][10] = { 0 };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			if (j == 0)
//				arr[i][j] = 1;
//			if (i == j)
//				arr[i][j] = 1;
//			if (j >= 1 && i >= 2)
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//		}
//	}
//	for (i = 0; i < 10; i++)
//	{
//		for (j = 0; j <= i; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int killer = 0;
//	for (killer = 'A'; killer <= 'D'; killer++)
//	{
//		if (((killer != 'A') + (killer == 'C') + (killer == 'D') + (killer != 'D')) == 3)
//		{
//			printf("%c\n", killer);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3)) == 1 &&
//							((b == 2) + (e == 4)) == 1 &&
//							((c == 1) + (d == 2)) == 1 &&
//							((c == 5) + (d == 3)) == 1 &&
//							((e == 4) + (a == 1)) == 1)
//						{
//							if (a * b * c * d * e == 120)
//							{
//								printf("%d %d %d %d %d\n", a, b, c, d, e);
//							}
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int arr[4][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int  num = 30;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 4; i++)
//	{
//		if (arr[i][4] < num)
//		{
//			continue;
//		}
//		for (j = 0; j < 5; j++)
//		{
//			if (arr[i][j] == num)
//			{
//				printf("找到了\n");
//				goto end;
//			}
//		}
//	}
//end:
//	if (i >= 4 || j >= 5)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int find(int arr[][5], int* row, int* col, int num)
//{
//	int x = 0;
//	int y = *col - 1;
//	while (x < *row && y >=0)
//	{
//		if (arr[x][y] < num)
//			x++;
//		else if (arr[x][y] > num)
//			y--;
//		else
//		{
//			*row = x;
//			*col = y;
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	int arr[4][5] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20 };
//	int x = 4;
//	int y = 5;
//	int num = 13;
//	int ret = find(arr, &x, &y, num);
//	if (ret)
//	{
//		printf("找到了\n");
//		printf("下标：%d,%d", x, y);
//	}
//	else
//		printf("找不到\n");
//	return 0;
//}

//void rotate(char* arr, int k)
//{
//	int len = strlen(arr);
//	int i = 0;
//	while (k--)
//	{
//		char tmp = arr[i];
//		for (i = 0; i < len - 1; i++)
//		{
//			arr[i] = arr[i + 1];
//		}
//		arr[i] = tmp;
//		i = 0;
//	}
//}
//int main()
//{
//	char arr[] = "ABCD";
//	int i = 0;
//	int k = 2;
//	rotate(arr, k);
//	printf("%s\n", arr);
//	return 0;
//}

#include<string.h>
//int rotate(char* arr1, char* arr2)
//{
//	int i = 0;
//	int len = strlen(arr1);
//	for (i = 0; i < len; i++)
//	{
//		int j = 0;
//		char tmp = *arr1;
//		for (j = 0; j < len; j++)
//		{
//			*(arr1 + j) = *(arr1 + j + 1);
//		}
//		*(arr1 + len - 1) = tmp;
//		if (strcmp(arr1, arr2) == 0)
//			return 1;
//	}
//	return 0;
//}
// 

//int rotate(char* arr1, char* arr2)
//{
//	int len = strlen(arr1);
//	if (strlen(arr1) != strlen(arr2))
//		return 0;
//	strncat(arr1, arr2, len);
//	char * ret = strstr(arr1, arr2);
//	//return ret != NULL;
//	if (ret != NULL)
//		return 1;
//	else
//		return 0;
//}
//int main()
//{
//	char arr1[] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = rotate(arr1, arr2);
//	if (ret)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}


//int int_cmp(void* p1, void* p2)
//{
//	return (*(int*)p1 - *(int*)p2);
//}
//void swap(void* p1, void* p2, int n)
//{
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		char tmp = *((char*)p1 + i);
//		*((char*)p1 + i) = *((char*)p2 + i);
//		*((char*)p2 + i) = tmp;
//	}
//}
//void bubble(void* base, int num, int n, int(*cmp)(void*, void*))
//{
//	int i = 0;
//	for (i = 0; i < num - 1; i++)
//	{
//		int j = 0;
//		for (j = 0; j < num - 1 - i; j++)
//		{
//			if (cmp((char*)base + j * n, (char*)base + (j + 1) * n) > 0)
//			{
//				swap((char*)base + j * n, (char*)base + (j + 1) * n, n);
//			}
//		}
//	}
//}
//int main()
//{
//	int arr[] = { 1,3,5,7,9,2,4,6,8,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble(arr, sz, sizeof(int), int_cmp);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	int m = 0;
//	scanf("%d %d", &n, &m);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < m; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < m; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			printf("%d ", arr[j][i]);
//		}
//		printf("\n");
//	}
//	return 0;
//}

//int main()
//{
//	int arr[10][10] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int j = 0;
//	int flag = 1;
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			scanf("%d", &arr[i][j]);
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < i; j++)
//		{
//			if (arr[i][j] != 0)
//			{
//				flag = 0;
//				goto end;
//			}
//		}
//	}
//end:
//	if (flag == 1)
//		printf("yes\n");
//	else
//		printf("no\n");
//	return 0;
//}

//int main()
//{
//	int arr[50] = { 0 };
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	int flag1 = 0;
//	int flag2 = 0;
//	for (i = 0; i < n - 1; i++)
//	{
//		if (arr[i] < arr[i + 1])
//		{
//			flag1 = 1;
//		}
//		else
//			flag2 = 1;
//	}
//	if (flag1 + flag2 == 1)
//		printf("sorted\n");
//	else
//		printf("unsorted\n");
//	return 0;
//}

//int main()
//{
//	int n = 15;
//	int m = 20;
//	int i = n;
//	int j = m;
//	int r = 0;
//	while (r = i % j)
//	{
//		i = j;
//		j = r;
//	}
//	printf("%d\n", m * n / j + j);
//	return 0;
//}

int main()
{

	return 0;
}