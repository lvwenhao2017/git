#ifndef PERSON_H_INCLUDED
#define PERSON_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;

class Person
{
friend istream &add_Person(istream&, Person &);
friend ostream &print_Person(ostream&,const Person &);
//封装  pra7.22
public:
//构造函数部分  pra7.15
    Person() =  default;
    Person(const string& n, const string& add):name(n),address(add) {}
    Person(const string& n):name(n) {}
//成员函数  pra7.5
    string getName() const;
    string getAddress() const;
private:
//成员变量  pra7.4
    string name;
    string address;

};
//类相关函数  pra7.9
istream &add_Person(istream&, Person &);
ostream &print_Person(ostream&,const Person &);

#endif // PERSON_H_INCLUDED
