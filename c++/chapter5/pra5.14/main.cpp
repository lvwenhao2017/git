#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    string s,temps;
    unsigned int cnt = 1;//存最大的重复次数
    cin >> temps;
    unsigned int tempcnt = 1;//存临时的重复次数
    while ( cin >> s )
    {
        if( s == temps )//如果重复 那么重复次数加一 当前字符串传给临时字符串
        {
            tempcnt++;
        }
        else//重复停止，开始传输较大的重复次数
        {
            if( tempcnt >cnt )
            {
                cnt = tempcnt;//把二者的较大值传给cnt
                tempcnt = 1;
            }
            temps = s;//两个字符串不相等 ，则改变temps
        }
    }
    if( tempcnt > cnt )//最后一次输入之后未进行比较
    {
        cnt = tempcnt;//把二者的较大值传给cnt
        tempcnt = 1;
    }
    if( cnt != 1 )
        cout << cnt;
    else
        cout << "No same data!\n";
    return 0;
}
