#include <iostream>
#include <string>
using namespace std;
//����������������
string::size_type findchar( const string&, char, string::size_type&);
int main()
{
    cout << "Hello world!" << endl;
    string::size_type ctr;
    char c;
    string s;
    cin >> s >> c;
    auto index = findchar(s, c, ctr);
    cout << index << " " << ctr;
    return 0;
}
string::size_type findchar( const string &s, char c, string::size_type &occurs)//Ѱ�Ҹ����ַ�  ���ռ��ַ���һ�γ��ֵ�λ�úʹ��� �������Ϊ �趨���ò���
{
    auto ret = s.size();
    occurs = 0;
    for(decltype(ret) i = 0;i != s.size(); ++i)
    {
        if(s[i] == c)
        {
            if(ret == s.size())
                ret = i;
            ++occurs;//����occursΪ���ã�������Ȼ���ݵ���λ�� ����Ȼ�ܸ����Եĵõ�Ϊ����
        }
    }
    return ret;
}

