#include <iostream>

using namespace std;

//此程序为了进一步讨论const的限定作用
int main()
{
    cout << "Hello world!" << endl;
 //   int* const p;
    const int a = 0;
    int b = 1;
    // p = &a;  该语句报错 所以 具有顶层const或者说常量指针不可以绑定常量；
/*    const int* c;
    const int* d;
    c = &a;
    d = &b;       //代码没有报错 说明指向常量的指针或者说具有底层const的指针可以指向任意常量或非常量；
*/
    cout << "普通成员函数调用的对象只能是非常量对象，常量成员函数不受限制";
    return 0;
}

