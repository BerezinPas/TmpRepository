#include <iostream>
#include "Listp.h"

using namespace std;

int main()
{
    string str("PETROV");
    person P1, P2("2222222222",240,90.2135),P3("333333"),P4("44444");
    
    P1.setall(str, 123, 40.555);
    P1.print();     

    Listp L1;
    L1.push_back(P2);
    L1.push_back(P3);
    L1.push_back(P4);
    L1.push_front(P1); 
 
    L1.insert(P1, 1);

    cout << L1.Getsize() << endl;

    L1.removeat(2);    
    
    cout << L1.Getsize()<<endl;      

}

