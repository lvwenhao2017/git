#include <iostream>
//�˳�����Ϊ�����۳������õ��������
int main()
{
    int i= 42;
    const int val=i;
    i*=2;
    const int &r1=i*2;
    double dval=3.14;
    const int &r2=dval;
    std::cout << r1 //�˶�Ϊ����֤�������ÿ����ñ��ʽ��Ϊֵ
     << " "  << r2 //�˶�Ϊ����֤�������ÿ����÷��������ͱ�����Ϊֵ
     << " " << val //�˶�Ϊ����֤const�޶��������ö����ʼ��
     << " " << i //�˶�Ϊ����֤const����
     <<std::endl;
}
