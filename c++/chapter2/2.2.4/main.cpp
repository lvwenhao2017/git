#include <iostream>
//��������˵��Ƕ������������
int reused=42;
int main()
{
    std::cout << reused <<std::endl;
    int reused =0;
    std::cout << reused << std::endl;
    std::cout << ::reused << std::endl; //��Ϊ ȫ������������Ϊ�գ�����reused��ߵ���������������Ϊ��ʱ�����������Ϊȫ�ֱ���
    return 0;
}
