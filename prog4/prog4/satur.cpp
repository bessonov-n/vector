#include "satur.h"
void satur::print(void)
{
	if (flag == true) { printf("*"); }
	myfloat::print();
}

void satur::ogran(void)
{
	if (c > 10000)
	{
		flag = true;
		c = 10000;
		d = 0;
	}
}

satur operator+ (const satur a1, const satur a2)
{
	bool flag;
	if (a1.flag == true || a2.flag == true)
	{
		flag = true;
	}
	else  flag = false; 
	/*myfloat A1(a1.c, a1.d, a1.ch);
	myfloat A2(a2.c, a2.d, a2.ch);
	myfloat A3 = A1 + A2;*/
	return satur((myfloat)a1+(myfloat)(a2), flag);
}

satur operator- (const satur a1, const satur a2)
{
	bool flag;
	if (a1.flag == true || a2.flag == true)
	{
		flag = true;
	}
	else  flag = false; 
	/*myfloat A1(a1.c, a1.d, a1.ch);
	myfloat A2(a2.c, a2.d, a2.ch);
	myfloat A3 = A1 - A2;*/
	return satur((myfloat)a1 - (myfloat)(a2), flag);
}

satur operator* (const satur a1, const satur a2)
{
	bool flag;
	if (a1.flag == true || a2.flag == true)
	{
		flag = true;
	}
	else  flag = false; 
	/*myfloat A1(a1.c, a1.d, a1.ch);
	myfloat A2(a2.c, a2.d, a2.ch);
	myfloat A3 = A1 * A2;*/
	return satur((myfloat)a1 * (myfloat)(a2), flag);
}

satur operator/ (const satur a1, const satur a2)
{
	bool flag;
	if (a1.flag == true || a2.flag == true)
	{
		flag = true;
	}
	else  flag = false; 
	//myfloat A1(a1.c, a1.d, a1.ch);
	//myfloat A2(a2.c, a2.d, a2.ch);
	//myfloat A3 = A1 / A2;
	return satur((myfloat)a1 / (myfloat)(a2), flag);
}

bool operator== (satur a1, satur a2)
{
	if ( ((myfloat)a1 == (myfloat)a2) && a1.flag == a2.flag )
	{
		return true;
	}
	else { return false; }

}