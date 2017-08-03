#include <iostream>

using namespace std;
void exchange(int *, int*);
void exchange(int &p, int &m);
int main()
{
    cout << "Hello world!" << endl;
    cout << "初始数据是1 2，接下来通过指针和引用的方式实现数据交换\n";
    int a = 1, b = 2;
    int *p = &a, *m = &b;
    exchange(p, m);
    cout << "接下来是练习题6.12，讨论引用作为函数的参数实现数据交换\n";
    exchange(a, b);
    return 0;
}
void exchange(int *p, int *m)
{
    int *temp;
    temp = p;
    p = m;
    m = temp;
    cout << *p << " " << *m << endl;
}
void exchange(int &p, int &m)
{
    int c = 0;
    c = p;
    p = m;
    m = c;
    cout << p << " " << m << endl;
}
