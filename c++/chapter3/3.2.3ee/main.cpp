#include <iostream>
#include <string>
using namespace std;
//该段程序旨在于通过对应坐标来访问string对象
int main()
{
    const string hex("0123456789ABCDEF");
    cout << "please input a series of number "
    <<endl;
    string result;
    decltype(hex.size()) n=0;
    while(cin >> n)
        if(n < hex.size())
        result+=hex[n];
        else
        {
            cerr << "\a数据不合法"<<endl;
        }
    cout << result << endl;
    return 0;
}
