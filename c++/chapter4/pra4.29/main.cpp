#include <iostream>

using namespace std;

int main()
{
    int x[10],i;
    int *p = x;sss
    double *s;
    cout << sizeof(x) / sizeof(*x) << " " << sizeof(*s) << endl;
    cout << sizeof(p) / sizeof(*p) << " " << sizeof(p) << sizeof(*p)/*����int���ʹ�С  *pdedao����Ԫ��*/ <<endl;
    cout << sizeof(i);
    return 0;
}
