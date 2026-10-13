#include <stdio.h>
#include <locale.h>
int main()
{
	setlocale(LC_ALL, "RUS");
	int ct;
	char symbol;
	printf("Ввести кол-во символов:");
	scanf_s("%d", &ct);
	printf("Ввести символ для печати:");
	scanf_s("%c", &symbol);
	for (int start = 1; start <= ct; start++)
	{
		putchar(symbol);
	}
	printf("\n");
	return 0;
}