#include <iostream>
/*��ϰ��2.36
����decltype
*/
using namespace std;
int main()
{
    int a=3,b=4,val=3,pval=4;
    decltype(a) c=a,val1=val;
    decltype((b)) d=a,pval1=val;
    decltype (a!=b)/*�������Ϊbool*/ e=a;
    decltype(val=pval)/*�������Ϊ����*/ currval=val;
    ++c;
    ++d;
    ++e;
    ++val1;
    ++pval1;
    ++currval;
    cout << "���ж�����Ϊ���ȱ��ʽ����������ж�Ϊbool\n"
    << a << " "
    << b << " "
    << c << " "
    << d << " "
    << e << " "
    <<endl;// 4 4 4 41
    cout << "���ж�����Ϊ��ֵ���������Ϊ����\n"
    << val << " "
    << pval << " "
    << val1 << " "
    << pval1 << " "
    << currval << " "//5 4 4 5 5
    <<endl;
}
