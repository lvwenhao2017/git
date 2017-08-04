#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    cout << "该程序将不断完善Person类\n";
    Person per_Andy("andy","山东大学");
    cout << per_Andy.getName() << " " << per_Andy.getAddress()
    <<endl;
    return 0;
}
