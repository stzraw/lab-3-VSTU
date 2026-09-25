#include <locale.h>
#include <stdio.h>
#include <stdlib.h> 
#define      D       2.54
#define      M       2.32166

int task1()
{
	int num,num2;
	puts("¬ведите число:");
	scanf_s("%d", &num);
	printf("¬ведено число %d\n", num);
	scanf_s("%d", &num2);
	printf("¬ведено число %d\n", num2);
	printf("%d %d %d %d %d\n", num + num2, num - num2, num * num2, num2 / num, num2 % num);
	return 0;

}

int task2()
{
	int dym;
	float result;

	puts("¬ведите число дл€ расчета:");
	scanf_s("%d", &dym);
	result = D * dym;
	printf("%d дюймов Ц это % .1f см\n", dym, result);
	return 0;

}

int task2mod()
{
	int pul;
	float result;

	puts("¬ведите число дл€ расчета:");
	scanf_s("%d", &pul);
	result = M * pul;
	printf("%d pulgada Ц это % .4f см\n", pul, result);
	return 0;

}

int task3()
{
	float a, b;
	puts("¬ведите числа дл€ расчета:");
	scanf_s("%f %f", &a, &b);
	puts("------------------------------------------");
	printf("|   a * b     |   a + b     |   a - b    |\n");
	puts("------------------------------------------");
	printf("|%-4.2f * %-4.2f  |%-4.2f + %-4.2f  |%-4.2f - %-4.2f |\n",a, b, a, b, a, b);
	puts("------------------------------------------");
	printf ("|%-11.2f  |%-11.2f  |%-11.2f |\n",a*b, a+b, a-b);
	puts("------------------------------------------");
	return 0;
}

int main()
{
	setlocale(LC_CTYPE, "RUS");
	task1();
	task2();
	task2mod();
	task3();

}