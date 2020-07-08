#pragma once
#include "satur.h"
class vector
{
	satur *v;//���������
	int sz;//������
public:
	vector(int s=99);
	vector(const vector&);	
	~vector();//����������
	inline int size() const { return sz; }
	satur &operator[](int);//����������
	inline satur &elem(int i) const { return v[i]; }//�����
	void print();
	void operator=(float);//������������ ���������
	void operator=(vector&);//������������ �������

	friend vector operator+(vector&, vector&);
	friend vector operator-(vector&, vector&);
	friend bool operator==(vector&, vector&);
};
void error(const char *p);