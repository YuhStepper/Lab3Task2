#include <stdio.h>
#include <locale.h>
#define      D       2.54
#define      P       2,32166

void main()
{
	setlocale(LC_CTYPE, "RUS");
	int dym, dym1;

	float result, result1;

	

	puts("¬ведите кол-во дюймов: ");
	scanf("%d", &dym);
	result = D * dym;

	puts("¬ведите кол-во испанских дюймов: ");
	scanf("%d", &dym1);
	result1 = P * dym1;

	printf(" %d дюймов Ц это %.1f см \n", dym, result);
	printf(" %d испанских дюймов Ц это %.1f см ", dym1, result1);
}