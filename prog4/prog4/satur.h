#pragma once
#include "myfloat.h"
class satur : public myfloat {
private: void ogran();
protected: bool flag;
public:
	satur(double value = 0) :myfloat(value)
	{
		ogran();
	}
	satur(const myfloat &mf, bool flag = false) :myfloat(mf), flag(flag)
	{
		ogran();
	}
	void print();
	friend satur operator+ (satur, satur);
	friend satur operator- (satur, satur);
	friend satur operator* (satur, satur);
	friend satur operator/ (satur, satur);
	friend bool operator== (satur, satur);

};
