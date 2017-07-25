#include <iostream>

using namespace std;
//此段程序仅用于验证constexpr与函数问题  c++11标准
constexpr int new_sz()
{
    return 42;
}//上面的代码定义了constexpr类型的函数
int main()
{
    constexpr int sz=new_sz();//定义了constexpr的整数变量，其值通过定义函数求得
    cout << sz;
    return 0;
}
