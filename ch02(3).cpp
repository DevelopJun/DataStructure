/*
// 2xN 타일링 문제(주석 필수) 
#include<stdio.h>

int d[1001]; // n이 1000개 만큼 들어온다고 했기 때문에, 메모리에 공간을 미리 부여함.

int TileRecursive(int x) {
	if (x == 1)
		return 1; // x가 1일때는 1만 나올수 있음으로 그대로 리턴함. 
	if (x == 2)
		return 2; // x가 2일때는 2만 나올수 있음으로 그대로 리턴함.
	if (d[x] != 0)
		return d[x]; //d[x]에 이미 들어가 있는 값이 존재한다면 그대로 그 값을 반환하도록 설정함. 
	return d[x] = (TileRecursive(x - 1) + TileRecursive(x - 2)) % 10007;
	// 점화식을 설정한대로, N이 3보다 커지게 되며느 가능한 경우는 오직 두가지 경우만 존재한다.
	// 즉 f(n)일때 길이는 f(n-1) + f(n-2) 2개를 더한 값이 된다.   
}

int main(void) { // 메인에서 입력값을 받아서 실행함. void 이기 때문에 return 따로 불필요함.
	int n;
	scanf_s("%d", &n); //첫째 줄에 n이 주어짐.
	printf("%d", TileRecursive(n)); // 첫재 줄에 2xn 크기의 직사각형을 채우는 방법 수를 출력

}
*/
