#include <iostream>
#include <vector>
using namespace std;
//输出一组整数的对称位数的和
int main()
{
    int i,sum;
    vector<int> vec;
    while (cin >> i)
        vec.push_back(i);
    vector<int>::size_type j;
    auto s=vec.size();
    for(j=0;j<=vec.size()-2;j++)
    {
        sum=vec[j]+vec[s-1-j];//奇数偶数均适用
        cout << sum << " ";
    }
    return 0;
}
