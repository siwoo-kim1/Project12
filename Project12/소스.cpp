#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
float change(float inch);

float change(float inch) {
	float ncm;
	ncm = inch * 2.54;
	return ncm;
}

int main() {
	float a = 0;
	printf("�� inch�Դϱ�?");
	scanf("%f", &a);
	float cm = change(a);
	printf("%f inch�� %f cm�Դϴ�", a, cm);
}