#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
//
int main()
{
    vector<string> vec;
    string str;

    while(cin >> str)
    {
        str+=" ";//cin流向string输入数据会自动过滤空格 向多个输入时以空格为界限
        //所以该程序需要手动添加空格
        vec.push_back(str);
    }
    for(auto c:vec)
        for(auto &c1:c)
        if(isspace(c1))
            cout << endl;//把每个词分隔到不同的行里
        else
        {
            c1=toupper(c1);
            cout <<c1;
       }
    return 0;
}
