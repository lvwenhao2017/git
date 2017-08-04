#include <iostream>
#include <string>
using namespace std;
int odd[] = {1,3,5,7,9};
int even[] = {0,2,4,6,8};
decltype(odd) &arrptr(int i);
constexpr int arrType = 6;//函数返回数组的引用
int main()
{
    auto a = arrptr(arrType);
    for(int i =0; i < 5; i++)
        cout << a[i];
    return 0;
}
decltype(odd) &arrptr(int i)
{
    return (i % 2) ? odd : even;
}
