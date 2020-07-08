#pragma once
#include <cmath>
#include <stdio.h>

class myfloat
{
protected: int c, d; char ch;  //� - ����� �����, d - �������, ch - ����(+-)
public: myfloat(double val = 0)//��������� ����
{
	c = abs((int)val);//����� �����
	d = abs((int)((abs(val) - c) * 1000));//������� �����


	if (val >= 0)//����������� �����
	{
		ch = ' ';
	}
	else
	{
		ch = '-';
	}
}
		myfloat(int c1, int d1, char ch1 = ' ')//����� �� ����������
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
