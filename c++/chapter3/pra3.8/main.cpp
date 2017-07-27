#include <iostream>
#include <string>
using namespace std;
//该段程序旨在于用传统for循环访问每个元素
int main()
{
    string val;
    string currval("");
    decltype(val.size()) n=0;
    getline(cin,val);
    for(n=0;n<val.size();n++)
        currval+="X";
    cout << currval;
    return 0;
}
