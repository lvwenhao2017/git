#include <iostream>

using namespace std;

//�˳���Ϊ�˽�һ������const���޶�����
int main()
{
    cout << "Hello world!" << endl;
 //   int* const p;
    const int a = 0;
    int b = 1;
    // p = &a;  ����䱨�� ���� ���ж���const����˵����ָ�벻���԰󶨳�����
/*    const int* c;
    const int* d;
    c = &a;
    d = &b;       //����û�б��� ˵��ָ������ָ�����˵���еײ�const��ָ�����ָ�����ⳣ����ǳ�����
*/
    cout << "��ͨ��Ա�������õĶ���ֻ���Ƿǳ������󣬳�����Ա������������";
    return 0;
}

