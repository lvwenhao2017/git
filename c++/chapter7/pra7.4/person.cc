#include "Person.h"
#include <iostream>
#include <string>

using namespace std;

//
string Person::getName() const
{
    return name;
}
//
string Person::getAddress() const
{
    return address;
}
//
istream &add_Person(istream& is, Person & per)
{
    is >> per.name >> per.address;
    return is;
}
//
ostream &print_Person(ostream& os,const Person &per)
{
    os << per.name << " " << per.address;
    return os;
}
//

