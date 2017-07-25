#include <iostream>
//此程序是为了讨论常量引用的特殊情况
int main()
{
    int i= 42;
    const int val=i;
    i*=2;
    const int &r1=i*2;
    double dval=3.14;
    const int &r2=dval;
    std::cout << r1 //此段为了验证常量引用可以用表达式作为值
     << " "  << r2 //此段为了验证常量引用可以用法其他类型变量作为值
     << " " << val //此段为了验证const限定符可以用对象初始化
     << " " << i //此段为了验证const作用
     <<std::endl;
}
