#include <iostream>

using namespace std;
//�����ͷ������Ͷ�Ŷ��const string������   ������������ǳ�����string����
//���ؽ����Ȼ�� const string �����ã������Ҫһ���µ� ���� ���������ǳ���ʱ���õ�һ����ͨ������
const string &shorterString(const string& s1,const string& s2)
{
    return ( s1.size() <= s2.size() ) ? s1 : s2;
}
//������������
string &shorterString( string& s1, string& s2);
int main()
{
    cout << "�ó���Ϊ����֤const_cast�ͺ������صĹ�ϵ" << endl;
    string s1{"Hello"};
    string s2{" "};
    string s3 = shorterString( s1, s2);
    cout << s3;
    return 0;
}
//���������Ķ���
string &shorterString( string& s1, string& s2)
{
    auto &r = shorterString( const_cast<const string&>(s1), const_cast<const string&>(s2) );//�Ƚ��ǳ���������ת��Ϊ�������� ͨ���������õõ��������ý��p;;
    return const_cast<string&>(r);//ȥ��������
}
