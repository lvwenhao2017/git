#include <iostream>
/*练习题2.36
讨论decltype
*/
using namespace std;
int main()
{
    int a=3,b=4,val=3,pval=4;
    decltype(a) c=a,val1=val;
    decltype((b)) d=a,pval1=val;
    decltype (a!=b)/*结果类型为bool*/ e=a;
    decltype(val=pval)/*结果类型为引用*/ currval=val;
    ++c;
    ++d;
    ++e;
    ++val1;
    ++pval1;
    ++currval;
    cout << "当判断类型为不等表达式，结果类型判断为bool\n"
    << a << " "
    << b << " "
    << c << " "
    << d << " "
    << e << " "
    <<endl;// 4 4 4 41
    cout << "当判断类型为赋值，结果类型为引用\n"
    << val << " "
    << pval << " "
    << val1 << " "
    << pval1 << " "
    << currval << " "//5 4 4 5 5
    <<endl;
}
