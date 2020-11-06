#include <stdio.h>

long int f(int a) {
	int c;
	long int r = 1;
	
	for (c = 1; c <= a; c++) {
		r = r * c;
	}
	return r;
}

int main(void) {
	int m, n;
	long int a, k, l, o;

	printf("求排列組合, 輸入兩整數M、N(以空格區分)：\n");
	scanf_s("%d %d", &m, &n);

	k = f(m);
	l = f(n);
	o = f(m - n);

	a = k / (l * o);
	printf("C(%d, %d) = %d\n", m, n, a);
	return 0;
}