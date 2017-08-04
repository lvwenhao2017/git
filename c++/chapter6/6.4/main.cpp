#include <iostream>

using namespace std;
//参数和返回类型都哦是const string的引用   ，如果对两个非常量的string调用
//返回结果依然是 const string 的引用，因此需要一个新的 函数 ，参数不是常量时，得到一个普通的引用
const string &shorterString(const string& s1,const string& s2)
{
    return ( s1.size() <= s2.size() ) ? s1 : s2;
}
//常量函数声明
string &shorterString( string& s1, string& s2);
int main()
{
    cout << "该程序为了验证const_cast和函数重载的关系" << endl;
    string s1{"Hello"};
    string s2{" "};
    string s3 = shorterString( s1, s2);
    cout << s3;
    return 0;
}
//常量函数的定义
string &shorterString( string& s1, string& s2)
{
    auto &r = shorterString( const_cast<const string&>(s1), const_cast<const string&>(s2) );//先将非常量的引用转换为常量引用 通过函数调用得到常量引用结果p;;
    return const_cast<string&>(r);//去常量性质
}
