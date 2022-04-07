#include <stdio.h>
#include <string.h>
#include <stdlib.h>


// 함수 포인터 배열

/*
void fuc()
{
	printf("hello\n\n");
}

int c(int b) {
	printf("%d", b);

	return 0;
}

int add(int x, int y)
{
	return x + y;
}

int sub(int x, int y)
{
	return x - y;
}

int mul(int x, int y)
{
	return x * y;
}

int div(int x, int y)
{
	return x / y;
}*/

int main()
{

	// 함수 포인터 배열
	// 반환값과 매개변수가 없는 함수 포인터 ptr을 선언


	/*

	{
		int* num;
		int num1 = 10;
		num = &num1;
		printf("%d\n\n", *num);


		int (*vptr) (int x, int y);

		vptr = add;

		printf("%d\n", vptr(5, 5));

		vptr = sub;
		printf("%d\n", vptr(5, 4));

		int (*mulptr) (int x, int y);

		mulptr = mul;
		printf("%d\n\n", mulptr(5, 5));

		int (*divptr) (int x, int y);
		divptr = div;

		printf("%d\n", divptr(4, 2));

		int a, b;
		scanf_s("%d %d", &a, &b);
		int (*fptr[5]) (int x, int y);

		fptr[0] = add;
		fptr[1] = sub;
		fptr[2] = mul;
		fptr[3] = div;

		printf("합 : %d\n차 : %d\n", fptr[0](a, b), fptr[1](a, b));
		printf("곱 : %d\n몫 : %d\n", fptr[2](a, b), fptr[3](a, b));
	}*/

	//약수와 최대공약수
	// 

	/*
	{
	int a, b;
	scanf_s("%d %d", &a, &b);
	int max = 0;
	if (a > b)
	max = a;
	else
	max = b;
	for (int i = max; i > 0; i--)
	{
		if (a % i == 0&& b % i == 0) {
			if (b >= i && a >= i) {
				a = a / i;
				b = b / i;
			}
		}

	}
	printf("%d %d", a, b);
	}*/

	char str[10] = { "Helll" };
	char strl[10] = { "Helll" };

	printf("%d", memcmp(str, strl,5));




	return 0;
}