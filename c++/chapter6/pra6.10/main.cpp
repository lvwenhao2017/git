#include <iostream>

using namespace std;
void exchange(int *, int*);
void exchange(int &p, int &m);
int main()
{
    cout << "Hello world!" << endl;
    cout << "��ʼ������1 2��������ͨ��ָ������õķ�ʽʵ�����ݽ���\n";
    int a = 1, b = 2;
    int *p = &a, *m = &b;
    exchange(p, m);
    cout << "����������ϰ��6.12������������Ϊ�����Ĳ���ʵ�����ݽ���\n";
    exchange(a, b);
    return 0;
}
void exchange(int *p, int *m)
{
    int *temp;
    temp = p;
    p = m;
    m = temp;
    cout << *p << " " << *m << endl;
}
void exchange(int &p, int &m)
{
    int c = 0;
    c = p;
    p = m;
    m = c;
    cout << p << " " << m << endl;
}
