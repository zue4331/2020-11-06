#include <stdio.h>

int odd(int a);
int even(int a);
int tSum(int a);

int main(void) {
	int n, s, a;
	char c;

	printf("1 + 2 + ...... + n = ? �п�Jn\n");
	scanf_s("%d", &n);
	printf("�п�ܰ��_�ƩM(O)�B���ƩM(E)�ξ�ƩM(I)�G\n");
	scanf_s(" %c", &c);

	switch (c) {
	case 'O':
	case 'o':
		s = odd(n);
		break;
	case 'E':
	case 'e':
		s = even(n);
		break;
	case 'I':
	case 'i':
		s = tSum(n);
		break;
	default:
		printf("���~\n");
		return -1;
	}

	printf("�`�X���G%d\n", s);
	return 0;
}

int odd(int a) {
	int t = 0;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 1) {
			t = t + i;
		}
	}
	return t;
}

int even(int a) {
	int t = 0;
	for (int i = 1; i <= a; i++) {
		if (i % 2 == 0) {
			t = t + i;
		}
	}
	return t;
}

int tSum(int a) {
	return odd(a) + even(a);
}