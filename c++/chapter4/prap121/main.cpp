#include <iostream>

using namespace std;

int main()
{
    int a =1;
    int *p = &a;
    decltype(&p) b = &p;//int**
    cout << **b;
    /*
    int a= 1;
    decltype(&a) b;bÊÇint*
    */
    return 0;
}
