/*
//재귀 함수
#include <stdio.h>

void Recursive(int num)
{
	if (num <= 0)
		return;
	printf("Recursive call! %d \n", num);
	Recursive(num - 1);
}

int main(void)
{
	Recursive(3);
	return 0;
}
*/


/*
//피보나치
#include<stdio.h>

int i = 0;
int Fibo(int n)
{
	printf("func call %d %d \n", n, i);
	i++;
	if (n == 1)
		return 0;
	else if (n == 2)
		return 1;
	else
		return Fibo(n - 1) + Fibo(n - 2);
}

int main()
{
	Fibo(7);
	return 0;
}
*/

/*
// 하노이 타워의 반복 패턴 
#include<stdio.h>

void HanoiTower(int n, char from, char tmp, char to) //from이 A라고, tmp가 B라고, to가 C라고 생각해야함. 
{
	if (n == 1)
		printf("Disk1 : %c -> %c \n", from, to);
	else
	{
		HanoiTower(n - 1, from, to, tmp);
		printf("Disk%d: %c -> %c \n", n, from, to);
		HanoiTower(n - 1, tmp, from, to);
	}

}

int main(void) {
	HanoiTower(3, 'A', 'B', 'C');
	return 0;
}
*/





























































