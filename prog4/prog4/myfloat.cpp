
#include "myfloat.h"

void myfloat::print(void)//вывод на экран
{
	if (ch == '0')
	{
		printf("на ноль делить нельзя\n");

	}
	else
	{
		printf("%c%d,%03d \n", ch, c, d);//обычный вывод
	}

}



myfloat operator+ (myfloat a1, myfloat a2)//сложение
{
	int a11, a22, a3, a3c, a3d;
	//из myfloat в int
	a11 = 1000 * a1.c + a1.d;
	if (a1.ch == '-')
	{
		a11 = -a11;
	}
	a22 = 1000 * abs(a2.c) + a2.d;
	if (a2.ch == '-')
	{
		a22 = -a22;
	}
	a3 = a11 + a22;
	a3c = abs(a3 / 1000);
	a3d = abs(a3 % 1000);
	if (a3 >= 0)//вывод числа
	{
		return myfloat(a3c, a3d);
	}
	else
	{
		return myfloat(a3c, a3d, '-');
	}

}

myfloat operator- (myfloat a1, myfloat a2)
{
	int a11, a22, a3, a3c, a3d;
	//из myfloat в int
	a11 = 1000 * abs(a1.c) + a1.d;
	if (a1.ch == '-')
	{
		a11 = -a11;
	}
	a22 = 1000 * a2.c + a2.d;
	if (a2.ch == '-')
	{
		a22 = -a22;
	}
	a3 = a11 - a22;
	a3c = abs(a3 / 1000);
	a3d = abs(a3 % 1000);
	if (a3 >= 0)
	{
		return myfloat(a3c, a3d);
	}
	else
	{
		return myfloat(a3c, a3d, '-');
	}
}

myfloat operator* (myfloat a1, myfloat a2)
{
	int a11, a22, a3, a3c, a3d;
	a11 = a1.c * 1000 + a1.d;
	if (a1.ch == '-')
	{
		a11 = -a11;
	}
	a22 = 1000 * a2.c + a2.d;
	if (a2.ch == '-')
	{
		a22 = -a22;
	}
	a3 = a11 * a22;
	a3c = abs(a3 / 1000000);

	a3d = abs((a3 % 1000000) / 1000);
	if (a3 >= 0)
	{
		return myfloat(a3c, a3d);
	}
	else
	{
		return myfloat(a3c, a3d, '-');
	}

}

myfloat operator/ (myfloat a1, myfloat a2) {
	if (a2.c == 0 && a2.d == 0)
	{
		return myfloat(0, 0, '0');
	}
	int a11, a22, a3, a3c, a3d;
	a11 = a1.c * 1000 + a1.d;
	if (a1.ch == '-')
	{
		a11 = -a11;
	}
	a22 = 1000 * a2.c + a2.d;
	if (a2.ch == '-')
	{
		a22 = -a22;
	}
	a3 = (a11 * 1000) / a22;
	a3c = abs(a3 / 1000);
	a3d = abs(a3 % 1000);
	if (a3 >= 0)
	{
		return myfloat(a3c, a3d);
	}
	else
	{
		return myfloat(a3c, a3d, '-');
	}
}

bool operator== (myfloat a1, myfloat a2)
{
	if (a1.c == a2.c && a1.d == a2.d) { return true; }
	else { return false; }
}