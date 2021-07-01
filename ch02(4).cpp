/*
// HW#2.1. Linear List 구현  
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // 배열 최대 크기

typedef int element;
typedef struct {
	element list[MAX_SIZE]; // 배열 정의
	int length; // 현재 배열에 저장된 자료들의 개수
}ArrayListType;

// 오류 처리 함수 
void error(const char* message) // visual studio에서 C++로 호환을 받아서 const char로 했습니다. C일때는 Char로 받으면 됩니다.
{
	printf("%s\n", message);
}

// 리스트 초기화 
void init(ArrayListType* L) 
{
	L->length = 0;
}

// 빈 리스트를 검사한다.
// 리스트가 비어 있으면 1을 반환하고.
// 그렇지 않으면 0을 반환한다.

int isEmpty(ArrayListType* L) {
	return L->length == 0; // 0이면 True를 반환, True가 1이니까
}

// 리스트가 포화상태인 검사 
// 리스트가 가득차 있으면 1을 반환 
// 그렇지 않으면 0을 반환한다. 
int isFull(ArrayListType* L) {
	return L->length == MAX_SIZE; // max_size이면 True이고 이거는 1이기 때문에 
}

//리스트의 모든 요소 출력 
void display(ArrayListType* L) {

	int i;
	printf("===Print Lists===\n");
	for (i = 0; i < L->length; i++)
		printf("ArrayList[%d]: %d\n", i, L->list[i]);

}

// 삽입 함수 
// pos: 삽입하고자 하는 위치
// item: 삽입하고자 하는 자료 
void insert(ArrayListType* L, int pos, element item) // 몇번째 인덱스에 어떤값을 넣을건지 
{
	int i;
	if (isFull(L))
		error("List is Full!");
	else if ((pos < 0) || (pos > L->length))
		error("Index Error");
	else {
		for (i = (L->length - 1); i >= pos; i--)
			L->list[i + 1] = L->list[i];
		L->list[pos] = item;
		L->length++;
		printf("ArrayList[%d]에 %d 삽입\n", pos, item);
	}
}

// 리스트 맨 앞에 요소 삽입 
void insertFirst(ArrayListType* L, element item)
{
	int i;
	int pos = 0;
	for (i = (L->length - 1); i >= pos; i--)
		L->list[i + 1] = L->list[i];
	L->list[pos] = item;
	L->length++;
	printf("ArrayList[%d]에 %d 삽입\n", pos, item);
}

// 리스트 맨 끝에 요소 삽입 
void insertLast(ArrayListType* L, element item)
{
	int i;
	int pos = L->length;
	for (i = (L->length - 1); i >= pos; i--)
		L->list[i + 1] = L->list[i];
	L->list[pos] = item;
	L->length++;
	printf("ArrayList[%d]에 %d 삽입\n", i, L->list[i]);
}

// 삭제 함수
// pos: 삭제하고자 하는 위치
// 반환값: 삭제되는 자료

element deleteA(ArrayListType* L, int pos) // c++에서 delete를 키워드로 인식하고 있기 때문에, deleteA라고 변경하였습니다.
{
	int i;
	element item;
	if (isEmpty(L))
		error("List is Empty!");
	else if ((pos < 0) || (pos >= L->length))
		error("Index Error");
	else {
		item = L->list[pos]; // 삭제 위치의 요소 값 반환을 위해 item으로 저장하는거임. 
		for (i = pos; i < L->length - 1; i++)
			L->list[i] = L->list[i + 1];
		L->length--;
		printf("ArrayList[%d]의 %d 삭제\n", pos, L->list[pos]);
		return item;
	}

}

 //리스트의 모든 요소 삭제
	 void clear(ArrayListType* L) {


 }

// pos 위치의 요소를 item으로 교체
void replace(ArrayListType* L, int pos, element item)
{
	L->list[pos] = item;
}


int main()
{
	ArrayListType* plist;

	// ListType를 동적으로 생성하고 ListType를 가리키는 
	// 포인터를 함수의 파라미터로 전달한다.
	plist = (ArrayListType*)malloc(sizeof(ArrayListType));
	init(plist);
	insert(plist, 0, 10);
	insert(plist, 0, 20);
	insertFirst(plist, 5);
	insertLast(plist, 30);
	insert(plist, -1, 3);
	
	display(plist);

	deleteA(plist, 2); 
	
	display(plist);

	replace(plist, 1, 50);
	display(plist);
	free(plist);

	return 0;
}
*/