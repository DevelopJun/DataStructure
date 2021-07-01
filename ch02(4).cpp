/*
// HW#2.1. Linear List ����  
#include <stdio.h>
#include <stdlib.h>

#define MAX_SIZE 100 // �迭 �ִ� ũ��

typedef int element;
typedef struct {
	element list[MAX_SIZE]; // �迭 ����
	int length; // ���� �迭�� ����� �ڷ���� ����
}ArrayListType;

// ���� ó�� �Լ� 
void error(const char* message) // visual studio���� C++�� ȣȯ�� �޾Ƽ� const char�� �߽��ϴ�. C�϶��� Char�� ������ �˴ϴ�.
{
	printf("%s\n", message);
}

// ����Ʈ �ʱ�ȭ 
void init(ArrayListType* L) 
{
	L->length = 0;
}

// �� ����Ʈ�� �˻��Ѵ�.
// ����Ʈ�� ��� ������ 1�� ��ȯ�ϰ�.
// �׷��� ������ 0�� ��ȯ�Ѵ�.

int isEmpty(ArrayListType* L) {
	return L->length == 0; // 0�̸� True�� ��ȯ, True�� 1�̴ϱ�
}

// ����Ʈ�� ��ȭ������ �˻� 
// ����Ʈ�� ������ ������ 1�� ��ȯ 
// �׷��� ������ 0�� ��ȯ�Ѵ�. 
int isFull(ArrayListType* L) {
	return L->length == MAX_SIZE; // max_size�̸� True�̰� �̰Ŵ� 1�̱� ������ 
}

//����Ʈ�� ��� ��� ��� 
void display(ArrayListType* L) {

	int i;
	printf("===Print Lists===\n");
	for (i = 0; i < L->length; i++)
		printf("ArrayList[%d]: %d\n", i, L->list[i]);

}

// ���� �Լ� 
// pos: �����ϰ��� �ϴ� ��ġ
// item: �����ϰ��� �ϴ� �ڷ� 
void insert(ArrayListType* L, int pos, element item) // ���° �ε����� ����� �������� 
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
		printf("ArrayList[%d]�� %d ����\n", pos, item);
	}
}

// ����Ʈ �� �տ� ��� ���� 
void insertFirst(ArrayListType* L, element item)
{
	int i;
	int pos = 0;
	for (i = (L->length - 1); i >= pos; i--)
		L->list[i + 1] = L->list[i];
	L->list[pos] = item;
	L->length++;
	printf("ArrayList[%d]�� %d ����\n", pos, item);
}

// ����Ʈ �� ���� ��� ���� 
void insertLast(ArrayListType* L, element item)
{
	int i;
	int pos = L->length;
	for (i = (L->length - 1); i >= pos; i--)
		L->list[i + 1] = L->list[i];
	L->list[pos] = item;
	L->length++;
	printf("ArrayList[%d]�� %d ����\n", i, L->list[i]);
}

// ���� �Լ�
// pos: �����ϰ��� �ϴ� ��ġ
// ��ȯ��: �����Ǵ� �ڷ�

element deleteA(ArrayListType* L, int pos) // c++���� delete�� Ű����� �ν��ϰ� �ֱ� ������, deleteA��� �����Ͽ����ϴ�.
{
	int i;
	element item;
	if (isEmpty(L))
		error("List is Empty!");
	else if ((pos < 0) || (pos >= L->length))
		error("Index Error");
	else {
		item = L->list[pos]; // ���� ��ġ�� ��� �� ��ȯ�� ���� item���� �����ϴ°���. 
		for (i = pos; i < L->length - 1; i++)
			L->list[i] = L->list[i + 1];
		L->length--;
		printf("ArrayList[%d]�� %d ����\n", pos, L->list[pos]);
		return item;
	}

}

 //����Ʈ�� ��� ��� ����
	 void clear(ArrayListType* L) {


 }

// pos ��ġ�� ��Ҹ� item���� ��ü
void replace(ArrayListType* L, int pos, element item)
{
	L->list[pos] = item;
}


int main()
{
	ArrayListType* plist;

	// ListType�� �������� �����ϰ� ListType�� ����Ű�� 
	// �����͸� �Լ��� �Ķ���ͷ� �����Ѵ�.
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