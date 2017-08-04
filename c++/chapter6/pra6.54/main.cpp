#include <iostream>
#include <vector>
using namespace std;
int funcAdd(int,int);
int funcMinus(int,int);
int funcMulti(int,int);
int funcExp(int,int);
using F = int(int,int);
int main()
{
    cout << "Hello world!" << endl;
    vector<int(*)(int,int)> vec;
    int (*a)(int,int) = funcAdd;
    int (*m)(int,int) = funcMinus;
    int (*fm)(int,int) = funcMulti;
    int (*e)(int,int) = funcExp;
    vec.push_back(a);
    vec.push_back(m);
    vec.push_back(fm);
    vec.push_back(e);
    //下面是如何调用函数指针的例子
    cout << "1 + 1 = " << a(1, 1) << "\n"
         << "1 - 1 = " << m(1, 1) << "\n"
         << "1 * 1 = " << fm(1, 2) << "\n"
         << "6 / 3 = " << e(6, 3) << "\n";
    return 0;
}
//执行加法运算
int funcAdd(int a,int b)
{
    return a+b;
}
//执行减法运算
int funcMinus(int a,int b)
{
    return a-b;
}
//执行乘法运算
int funcMulti(int a,int b)
{
    return a*b;
}
//执行除法运算
int funcExp(int a,int b)
{
    return (b != 0) ? (a/b) : 0;
}
