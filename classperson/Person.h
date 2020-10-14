#include <string>
using namespace std;
class person
{
public:
	person();
	person(string FIO1, int age1, double weight1);
	person(string FIO1, int age1);
	person(string FIO1);
	~person();

	void setFIO(string FIO1);
	void setage(int age1);
	void setweight(double weight1);
	void setall(string FIO1, int age1, double weight);
	void setNext(person* pNext1);

	person* getNext();
	string getFIO();
	int getage();
	double getweight();

	void inputall();
	void print();

protected:
	person* pNext;
	string FIO;
	int age;
	double weight;
	
};

