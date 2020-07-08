#include "vector.h"
#include <iostream>
int main()
{
	setlocale(LC_ALL, "Russian");
	
	vector v1(1000000000), v2(4);

	for (int i = 0; i < v1.size(); i++)
	{
		v1[i] = 2;
	}
	v2 = 5;

	printf("v1:\n");
	v1.print();
	printf("\nv2:\n");
	v2.print();
	
	v1 = v2;

	printf("\nv1=v2:\n");
	v1.print();

	printf("\nАдрес v1[1] = %p \n", &v1.elem(1));

	vector v3(v1);
	printf("\nv3 - копия v1:\n");
	v3.print();
	
	vector v4 = v1 + v2;
	printf("\nv4 = v1 + v2:\n");
	v4.print();

	vector v5 = v1 - v2;
	printf("\nv5 = v1 - v2:\n");
	v5.print();
	
	if (v1 == v2) { printf("\nv1 = v2\n"); }
	else { printf("\nv1 не равно v2\n"); }
	
	if (v4 == v5) { printf("\nv4 = v5\n"); }
	else { printf("\nv4 не равно v5\n"); }

	
	
	
	
	/*
	satur v1 = 9000, v2 = 4000, v3 = 2000, v4 = 4000;
	satur p1 = 16000;
	p1.print();

	p1 = p1 - v3;
	p1.print();
	p1 = p1 + 1000;
	p1.print();



	satur val1 = 2.5, val2 = 5.0;
	printf("Первое число: ");
	val1.print();


	printf("Второе число: ");
	val2.print();

	satur plus = val1 + val2;
	printf("Сумма чисел: ");
	plus.print();

	satur minus = val1 - val2;
	printf("Разность чисел: ");
	minus.print();

	satur proizv = val1 * val2;
	printf("Произведение чисел: ");
	proizv.print();

	satur delen = val1 / val2;
	printf("Деление чисел: ");
	delen.print();
	*/
	system("pause");
}