#include <stdio.h>

long int rf(int a) {
	long int r;
	if (a > 1) {
		r = a * rf(a - 1);
		return r;
	}
	else return 1;
}

int main(void) {
	int m, n;
	long int a, k, l, o;

	printf("求排列組合C(M,N), 輸入M、N(以空格區分)\n");
	scanf_s("%d %d", &m, &n);

	k = rf(m);
	l = rf(n);
	o = rf(m - n);

	a = k / (l * o);
	printf("C(%d, %d) = %d\n", m, n, a);
	return 0;
}