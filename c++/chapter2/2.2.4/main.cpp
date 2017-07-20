#include <iostream>
//程序用于说明嵌套作用域问题
int reused=42;
int main()
{
    std::cout << reused <<std::endl;
    int reused =0;
    std::cout << reused << std::endl;
    std::cout << ::reused << std::endl; //因为 全局作用域名字为空，所以reused左边的作用域运算符左边为空时，即后面变量为全局变量
    return 0;
}
