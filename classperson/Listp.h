#pragma once
#include "Person.h"
class Listp
{
public:
	
	Listp();
	~Listp();
	
	
	 void push_back(person data);
	 void push_front(person data);

	 void pop_back();
	 void pop_front();

	 void removeat(int index);
	 void insert(person data, int index);

	 void clear();
	 int Getsize();



private:

	person* Head;
	person data;
	int size;
};

