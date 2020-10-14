#include "Person.h"
#include <iostream>



using namespace std;

person::person()
{	 
	 age = 0;
	 weight = 0;
	 pNext = nullptr;
}

person::person(string FIO1,int age1, double weight1)
{
	FIO = FIO1;
	age = age1;
	weight = weight1;
	pNext = nullptr;
	
}

person::person(string FIO1):person()
{
	FIO = FIO1;
	pNext = nullptr;	
}

person::person(string FIO1,int age1): person()
{
	FIO = FIO1;
	age = age1;
	pNext = nullptr;
}

person::~person()
{

}

void person::setage(int age1)
{
	age = age1;
}
void person::setFIO(string FIO1)
{
	FIO = FIO1;
}
void person::setweight(double weight1)
{
	weight = weight1;
}
void person::setall(string FIO1, int age1, double weight1)
{
	FIO = FIO1;
	age = age1;
	weight = weight1;
	
}
void person::setNext(person* pNext1)
{
	pNext=pNext1;
}
person* person::getNext()
{
	return pNext;
}
int person::getage()
{
	return age;
}
string person::getFIO()
{
	return FIO;
}
double person::getweight()
{
	return weight;
}
void person::print()
{
	cout << "FIO " << FIO << endl;
	cout << "AGE " << age << endl;
	cout <<"weight"<< weight << endl;
}
void person::inputall()
{
	cout << "Vvedite FIO "<< endl;
	cin >> FIO;
	cout << "Vvidite Age " << endl;
	cin >> age;
	cout << "Vvedite weight "<< endl;
	cin >> weight;

}