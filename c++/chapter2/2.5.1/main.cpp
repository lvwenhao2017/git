#include <iostream>
//该程序旨在验证类别别名与指针常量的关系
using namespace std;
int main()
{
    char estring='A';
    typedef char *pstring;
    pstring cstr=&estring;

    *cstr =42;//当语句出现cstr++；  程序错误 说明pstring是指向char的常量指针
     cout << cstr << endl;
    return 0;
}
