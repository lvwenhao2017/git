#include <iostream>

using namespace std;

int main()
{
    int i = 1,j=0;
    j = ++i;
 //   cout << i << " " << ++i;//未定义 因为《《 符号没有求值顺序
    return 0;
}
