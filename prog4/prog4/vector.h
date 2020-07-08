#pragma once
#include "satur.h"
class vector
{
	satur *v;//указатель
	int sz;//размер
public:
	vector(int s=99);
	vector(const vector&);	
	~vector();//деструктор
	inline int size() const { return sz; }
	satur &operator[](int);//индексация
	inline satur &elem(int i) const { return v[i]; }//адрес
	void print();
	void operator=(float);//присваивание элементов
	void operator=(vector&);//присваивание вектора

	friend vector operator+(vector&, vector&);
	friend vector operator-(vector&, vector&);
	friend bool operator==(vector&, vector&);
};
void error(const char *p);