#pragma once
#include <cmath>
#include <stdio.h>

class myfloat
{
protected: int c, d; char ch;  //с - целая часть, d - дробная, ch - знак(+-)
public: myfloat(double val = 0)//первичный ввод
{
	c = abs((int)val);//целая часть
	d = abs((int)((abs(val) - c) * 1000));//дробная часть


	if (val >= 0)//определение знака
	{
		ch = ' ';
	}
	else
	{
		ch = '-';
	}
}
		myfloat(int c1, int d1, char ch1 = ' ')//вывод из операторов
		{
			c = c1; d = d1; ch = ch1;
		}
		void print();
		friend bool   operator== (myfloat, myfloat);
		friend myfloat operator+ (myfloat, myfloat);
		friend myfloat operator- (myfloat, myfloat);
		friend myfloat operator* (myfloat, myfloat);
		friend myfloat operator/ (myfloat, myfloat);
};

#pragma once
