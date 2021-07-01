/*
// HW#2.3. ������ ��ġ���� 
#include<stdio.h>

typedef struct {
	int row;
	int col;
	int value;
}matrix;

void transposeSM(matrix a[], matrix b[]) {
	int i, j, currentb;
	b[0].col = a[0].row; // ��ġ��� b�� �� �� = ������ a�� �� �� 
	b[0].row = a[0].col; // ��ġ��� b�� �� �� = ��� ��� a�� �� �� 
	b[0].value = a[0].value; // ��ġ��� b�� ���� �� = ������ a���� 0�� �ƴ� ���Ҽ� 

	if (a[0].value > 0) { // 0�� �ƴ� ���Ұ� �ִ� ��쿡�� ��ġ ���� ���� 
		currentb = 1;
		for (i = 0; i < a[0].col; i++)
			for (j = 1; j <= a[0].value; j++) //���� 0�� �ƴ� ���� ���� ���ؼ��� �ݺ� ����
				if (a[j].col == i) {
					b[currentb].row = a[j].col;
					b[currentb].col = a[j].row;
					b[currentb].value = a[j].value;
					currentb++;
				}
	}
}

int main() {
	int i, j;
	matrix a[11] = { {8,7,10},
						{0,2,2},
						{0,6,12},
						{1,4,7},
						{2,0,23},
						{3,3,31},
						{4,1,14},
						{4,5,25},
						{5,6,6},
						{6,0,52},
						{7,4,11}
	};
	matrix b[11] = { 0, };
	transposeSM(a, b);

	printf("Matrix a\n");
	for (i = 0; i < 11; i++)
		printf("%d: %d %d %d\n", i, a[i].row, a[i].col, a[i].value);
	printf("Transpose Matrix b\n");
	for (i = 0; i < 11; i++)
		printf("%d: %d %d %d\n", i, b[i].row, b[i].col, b[i].value);
	return 0;
}
*/