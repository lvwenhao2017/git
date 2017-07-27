#include <iostream>
#include <string>
#include <cctype>
//此段程序旨在于对下表的应用
using namespace std;
int main()
{
    string random;
    cout << "please enter a series of word:"<<endl;
    getline(cin,random);
    for(decltype(random.size()) index = 0; index!=random.size()&&!isspace(random[index]) ;++index)
        random[index]= toupper(random[index]);//将当前字符改成大写形式
    cout << random << endl;
    return 0;
}
