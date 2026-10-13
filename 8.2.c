#include <stdio.h>
#include <locale.h>
#include <math.h>
#define start 2.0
#define end 4.0
int main()
{
	setlocale(LC_ALL, "RUS");
	float step, x, y;
	printf("функция y=2^x-2x^2-1\n");
	printf("Введите шаг табуляции:");
	scanf_s("%f", &step);
	printf("----------------\n");
	printf("|   x   |   f(x)  |\n");
	printf("----------------\n");
	for (x = start; x <= end + 0.001; x += step)
	{
		y = pow(2, x) - 2 * pow(x, 2) - 1;
		printf("|  %.2f  |  %.2f  |\n", x, y);

	}
	printf("---------------\n");
	return 0;
}
