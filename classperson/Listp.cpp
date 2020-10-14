#include "Listp.h"
#include <iostream>

using namespace std;



Listp::Listp()
{
	size = 0;
	Head = nullptr;
}

Listp::~Listp()
{
	clear();
}

void Listp::push_back(person data)
{	
	if (Head==nullptr)
	{
		Head = new person(data);
	}
	else
	{
		person* current = this->Head;
		while ((current->getNext())!=nullptr)
		{
			current = current->getNext();
		}
		current->setNext(new person(data));
	}
	size++;
}
void Listp::push_front(person data)
{
	person* tmp = Head;
	(Head = new person(data))->setNext(tmp);
	size++;
}
void Listp::pop_front()
{
	person* tmp=Head;
	Head = Head->getNext();
	size--;
	delete tmp;
}
void Listp::removeat(int index)
{
	if (index==0)
	{
		pop_front();
	}
	else
	{
		person* current = Head;
		for (int i = 0; i < index-1; i++)
		{
			current = current->getNext();
		}
		person* tmp = current;
		current = current->getNext();
		tmp->setNext(current->getNext());
		delete current;
	}
	size--;
}
void Listp::insert(person data, int index)
{
	if (index==0)
	{
		push_front(data);
	}
	else
	{
		person* current = Head;
		for (int i = 0; i < index-1; i++)
		{
			current = current->getNext();
		}
		person* tmp = current->getNext();
		current->setNext(new person(data));
		current = current->getNext();
		current->setNext(tmp);
	}
	size++;
}
void Listp::clear()
{
	while (Head!=nullptr)
	{
		person* tmp = Head;
		Head = Head->getNext();
		delete tmp;
		size--;
	}

}
int Listp::Getsize()
{
	return size;
}
void Listp::pop_back()
{
	removeat(size - 1);
}