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
	int first = 0; // 탐색 대상 시작 인덱스 설정
	int last = len - 1; // 탐색 대상 마지막 인덱스 값
	int mid;

	while (first <= last)
	{
		mid = (first + last) / 2; // 탐색 대상의 중앙 인덱스 찾기 
		if (target == arr[mid])
		{
			return mid; // target 값과 mid 값이 일치해서 탐색이 완료되었음. 
		}
		else
		{
			if (target < arr[mid])
				last = mid - 1; // target이 arr[mid]보다 당연히 작기 때문에, last를 mid에서 왼쪽(정렬기준)으로 변경해야함.
			else
				first = mid + 1; // target이 arr[mid]보다 당연히 크기 때문에, first를 mid에서 오른쪽(정렬기준)으로 변경해야함. 
		}
	}
	return -1; // 찾지 못할 경우에 반환되는 값임. -1 
}

int main(int argc, char*argv[])
{
	int arr[10] = { 5, 8, 13, 16, 20, 22, 34, 45, 56, 77 }; //임의로 배열 정해서 넣었습니다. 
	int index; // 반환되는 index값으로 입력한 값이 배열에 있는지 확인함. 
	int key;

	scanf_s("%d",&key);
	index = Bsearch(arr, 10, key);
	if (index == -1) {
		printf("찾는 값이 없습니다.");
	}
	else
	{
		printf("자료가 %d번째에 있습니다.\n", index + 1);
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
	int arr[10] = { 5, 8, 13, 16, 20, 22, 34, 45, 56, 77 }; //임의로 배열 정해서 넣었습니다. 
	int index; // 반환되는 index값으로 입력한 값이 배열에 있는지 확인함. 
	int key;

	scanf_s("%d", &key);
	index = BsearchRecursive(arr, 0, 9, key);
	if (index == -1) {
		printf("찾는 값이 없습니다.");
	}
	else
	{
		printf("자료가 %d번째에 있습니다.\n", index + 1);
	}
	return 0;
}
*/
