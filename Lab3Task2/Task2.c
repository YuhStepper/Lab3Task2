#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      P       2,32166

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int dym, dym1;

	float result, result1;

	

	puts("������� ���-�� ������: ");
	scanf("%d", &dym);
	result = D * dym;

	puts("������� ���-�� ��������� ������: ");
	scanf("%d", &dym1);
	result1 = P * dym1;

	printf(" %d ������ � ��� %.1f �� \n", dym, result);
	printf(" %d ��������� ������ � ��� %.1f �� ", dym1, result1);
}