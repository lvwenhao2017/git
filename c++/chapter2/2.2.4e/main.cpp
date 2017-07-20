#include <iostream>

using namespace std;

int main()
{
    for (int reused = 10;reused >= 0;--reused)
    {
        cout << reused << " ";
        cout << endl << reused;//如果把这条语句放到花括号外面则程序错误，所以gcc编译器下作用域直到花括号结束
    }
    return 0;
}
