#include "vector.h"
#include <iostream>
#include <stdexcept>
using namespace std;
void error(const char *p) {
	puts(p);
	system("pause");
	exit(1);
}

vector::vector(int s) {
	if (s <= 0) error("1");
	sz = s;
	/*v = new satur[sz];*///? exception обработчик исключений try, catch
	try
	{
		v = new satur[sz];
	}
	catch (bad_array_new_length)
	{
		error("size exception");
	}
	
	if (v == 0) error("2");
}


vector::vector(const vector& a)
{
	if (a.size() <= 0) { error("20"); }
	sz = a.size();
	v = new satur[sz];
	if (v == 0) error("23");
	for (int i = 0; i < sz; i++)
	{
		v[i] = a.elem(i);
	}
}

vector::~vector() {
	if (v == 0) error("35");
	delete[] v;
	v = 0;
}

satur &vector::operator[](int i) {
	if (i < 0 || sz <= i) error("99");
	return v[i];
}

void vector::print(void)
{
	for (int i = 0; i < sz; i++)
	{
		v[i].print();
	}
}

void vector::operator=(float a)
{
	for (int i = 0; i < sz; i++)
	{
		v[i] = a;
	}
}

void vector::operator=(vector &a)
{
	if (size() != a.size())
	{
		delete[]v;	 
		sz = a.size();
		v = new satur[sz];
		if (v == 0) { error("67"); }
	}
	for (int i = 0; i < sz; i++)
	{
		v[i] = a.elem(i);
	}
}

vector operator+(vector& a1, vector& a2)
{
	if (a1.size() != a2.size()) error("74");
	vector tmp(a1.size());
	for (int i = 0; i < a1.size(); i++)
	{
		tmp.elem(i) = a1.elem(i) + a2.elem(i);
	}
	return tmp;
}

vector operator-(vector& a1, vector& a2)
{
	if (a1.size() != a2.size()) error("74");
	vector tmp(a1.size());
	for (int i = 0; i < a1.size(); i++)
	{
		tmp.elem(i) = a1.elem(i) - a2.elem(i);
	}
	return tmp;
}

bool operator==(vector &a1, vector &a2)
{
	if (a1.size() != a2.size()) return false;
	for (int i = 0; i < a1.size(); i++)
	{
		if (!(a1.elem(i) == a2.elem(i)))
		{
			return false;
		}
	}
	return true;
}

