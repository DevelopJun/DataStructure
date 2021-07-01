/*
//Factorial
#include <stdio.h>
int factorial(int n)
{
	if (n == 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int main()
{
	printf(" % d", factorial(5));

	return 0;
}
*/

/*
//Binarty search algo 1


#include<stdio.h>

int Bsearch(int arr[], int len, int target)
{
	int first = 0; // Ž�� ��� ���� �ε��� ����
	int last = len - 1; // Ž�� ��� ������ �ε��� ��
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // Ž�� ����� �߾� �ε��� ã�� 
		if (target == arr[mid])
		{
			return mid; // target ���� mid ���� ��ġ�ؼ� Ž���� �Ϸ�Ǿ���. 
		}
		else
		{
			if (target < arr[mid])
				last = mid - 1; // target�� arr[mid]���� �翬�� �۱� ������, last�� mid���� ����(���ı���)���� �����ؾ���.
			else
				first = mid + 1; // target�� arr[mid]���� �翬�� ũ�� ������, first�� mid���� ������(���ı���)���� �����ؾ���. 
		}
	}
	return -1; // ã�� ���� ��쿡 ��ȯ�Ǵ� ����. -1 
}

int main(int argc, char*argv[])
{
	int arr[10] = { 5, 8, 13, 16, 20, 22, 34, 45, 56, 77 }; //���Ƿ� �迭 ���ؼ� �־����ϴ�. 
	int index; // ��ȯ�Ǵ� index������ �Է��� ���� �迭�� �ִ��� Ȯ����. 
	int key;

	scanf_s("%d",&key);
	index = Bsearch(arr, 10, key);
	if (index == -1) {
		printf("ã�� ���� �����ϴ�.");
	}
	else
	{
		printf("�ڷᰡ %d��°�� �ֽ��ϴ�.\n", index + 1);
	}
	return 0;
}

*/


/*
//Binarty search algo 2

#include<stdio.h>

int BsearchRecursive(int arr[], int first, int last, int target)
{
	int mid;
	if (first > last)
		return -1;

	mid = (first + last) / 2;
	if (arr[mid] == target)
		return mid;
	else if (arr[mid] > target)
		return BsearchRecursive(arr, first, mid - 1, target);
	else
		return BsearchRecursive(arr, mid + 1, last, target);
}

int main(int argc, char* argv[])
{
	int arr[10] = { 5, 8, 13, 16, 20, 22, 34, 45, 56, 77 }; //���Ƿ� �迭 ���ؼ� �־����ϴ�. 
	int index; // ��ȯ�Ǵ� index������ �Է��� ���� �迭�� �ִ��� Ȯ����. 
	int key;

	scanf_s("%d", &key);
	index = BsearchRecursive(arr, 0, 9, key);
	if (index == -1) {
		printf("ã�� ���� �����ϴ�.");
	}
	else
	{
		printf("�ڷᰡ %d��°�� �ֽ��ϴ�.\n", index + 1);
	}
	return 0;
}
*/
