#include <iostream>
//ԭ��Ϊ��ʼ���100��������8����ÿ�����һ��ȡ10�� ����ȡ��
using namespace std;
int main()
{
    int om = 100,year=0;
    double currm=100,rate=0.08;
    while(currm>0)
    {
        currm=currm*(1+rate)-10;
        year++;
    }
    cout << year <<endl;
    return 0;//������Ϊ21��
}
