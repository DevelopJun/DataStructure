/*
//HW#2.2. 다항식의 덧셈 
#include<stdio.h>
#define MAX(a,b) a>b ? a : b
#define MAX_DEGREE 50

typedef struct {
	int degree;		// 다항식의 차수를 저장할 변수 
	float coef[MAX_DEGREE];	// 다항식의 각 항의 계수를 저장할 1차원 배열 
}polynomial;


polynomial addPoly(polynomial A, polynomial B) {
	polynomial C;
	int Apos = 0, Bpos = 0, Cpos = 0;
	int degree_a = A.degree;
		int degree_b = B.degree;
		C.degree = MAX(A.degree, B.degree);

		while (Apos <= A.degree && Bpos <= B.degree)
		{
			if (degree_a > degree_b) {
				C.coef[Cpos++] = A.coef[Apos++];
				degree_a--;
			 }
			else if (degree_a == degree_b) {
				C.coef[Cpos++] = A.coef[Apos++] + B.coef[Bpos++];
				degree_a--;
				degree_b--;
			}
			else
			{
				C.coef[Cpos++] = B.coef[Bpos++];
				degree_b--;
			}
		}
		return C;

}

void printPoly(polynomial P) {
	int i, degree = P.degree;

	for (i = 0; i <= P.degree; i++) {
		printf("%3.0fx^%d", P.coef[i], degree--);
		if (i < P.degree) printf(" +");
	}
	printf("\n");
}


int main() {
	polynomial A = { 3, {4, 3, 5, 0} };
	polynomial B = { 4, {3, 1, 0, 2, 1} };

	polynomial C = addPoly(A, B);

	printf("\n A(x)="); printPoly(A);
	printf("\n B(x)="); printPoly(B);
	printf("\n C(x)="); printPoly(C);

	return 0;
}
*/