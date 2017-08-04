#include <iostream>
#include <string>
using namespace std;
//继续7.1.2的讨论 编写一个类 讨论成员函数与常量成员函数的区别

class test
{
public:
    string s;
    test(string a)
    {
        (*this).s = a;
    }
    string add(string a)/*加上后面语句29行就不会报错*/ const
    {
        return (s + a);
    }
private:

};

int main()
{
    cout << "Hello world!" << endl;
    test tes1("hello");
    const test tes2("world");
    string a = "",b = "";
    a = tes1.add(a);
    b = tes2.add(b);
    return 0;
}
