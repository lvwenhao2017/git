#include <iostream>
//�ó���ּ����֤��������ָ�볣���Ĺ�ϵ
using namespace std;
int main()
{
    char estring='A';
    typedef char *pstring;
    pstring cstr=&estring;

    *cstr =42;//��������cstr++��  ������� ˵��pstring��ָ��char�ĳ���ָ��
     cout << cstr << endl;
    return 0;
}
