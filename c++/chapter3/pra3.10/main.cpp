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
            c=' ';//ע�⸳ֵʱ��һ�Ե�����
    cout <<val;
    return 0;
}
