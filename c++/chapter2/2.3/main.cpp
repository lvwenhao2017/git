#include <iostream>
//这个程序是用来测试引用类型的性质
int main()
{
    int i,&ri=i;
    i=5;
    ri=20;
    std::cout << i << " " << ri <<std::endl;
}
