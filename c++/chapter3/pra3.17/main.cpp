#include <iostream>
#include <vector>
#include <string>
#include <cctype>
using namespace std;
//
int main()
{
    vector<string> vec;
    string str;

    while(cin >> str)
    {
        str+=" ";//cin����string�������ݻ��Զ����˿ո� ��������ʱ�Կո�Ϊ����
        //���Ըó�����Ҫ�ֶ���ӿո�
        vec.push_back(str);
    }
    for(auto c:vec)
        for(auto &c1:c)
        if(isspace(c1))
            cout << endl;//��ÿ���ʷָ�����ͬ������
        else
        {
            c1=toupper(c1);
            cout <<c1;
       }
    return 0;
}
