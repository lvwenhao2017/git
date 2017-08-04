#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Person
{
friend istream &add_Person(istream&, Person &);
friend ostream &print_Person(ostream&,const Person &);
//��װ  pra7.22
public:
//���캯������  pra7.15
    Person() =  default;
    Person(const string& n, const string& add):name(n),address(add) {}
    Person(const string& n):name(n) {}
//��Ա����  pra7.5
    string getName() const;
    string getAddress() const;
private:
//��Ա����  pra7.4
    string name;
    string address;

};
//����غ���  pra7.9
istream &add_Person(istream&, Person &);
ostream &print_Person(ostream&,const Person &);

#endif // PERSON_H_INCLUDED
