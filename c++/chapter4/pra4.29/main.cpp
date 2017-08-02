#include <iostream>

using namespace std;

int main()
{
    int x[10],i;
    int *p = x;sss
    double *s;
    cout << sizeof(x) / sizeof(*x) << " " << sizeof(*s) << endl;
    cout << sizeof(p) / sizeof(*p) << " " << sizeof(p) << sizeof(*p)/*返回int类型大小  *pdedao数组元素*/ <<endl;
    cout << sizeof(i);
    return 0;
}
