#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
    string val;
    getline(cin,val);
    for(char &c : val)
        if(ispunct(c))
            c=' ';//注意赋值时用一对单引号
    cout <<val;
    return 0;
}
