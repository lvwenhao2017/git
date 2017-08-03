#include <iostream>
#include <string>
using namespace std;
//函数返回两个参数
string::size_type findchar( const string&, char, string::size_type&);
int main()
{
    cout << "Hello world!" << endl;
    string::size_type ctr;
    char c;
    string s;
    cin >> s >> c;
    auto index = findchar(s, c, ctr);
    cout << index << " " << ctr;
    return 0;
}
string::size_type findchar( const string &s, char c, string::size_type &occurs)//寻找给定字符  并收集字符第一次出现的位置和次数 解决方案为 设定引用参数
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0;i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;//由于occurs为引用，所以虽然传递的是位置 ，依然能附加性的得到为次数
        }
    }
    return ret;
}

