#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "�ó��򽫲�������Person��\n";
    Person per_Andy("andy","ɽ����ѧ");
    cout << per_Andy.getName() << " " << per_Andy.getAddress()
    <<endl;
    return 0;
}
