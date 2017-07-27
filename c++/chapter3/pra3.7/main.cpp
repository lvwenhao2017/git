#include <iostream>
#include <string>
using namespace std;
//用while循环对每个字符进行访问
int main()
{
    string val;
    string currval("");
    string::size_type n=0;
    getline(cin,val);
    while(n<val.size())
    {
        currval=currval+"X";
        n++;
    }
    cout << currval;
    return 0;
}
