#include <iostream>
#include <string>
using namespace std;
//�öγ���ּ�����ô�ͳforѭ������ÿ��Ԫ��
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
