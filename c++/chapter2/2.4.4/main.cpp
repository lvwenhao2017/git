#include <iostream>

using namespace std;
//�˶γ����������֤constexpr�뺯������  c++11��׼
constexpr int new_sz()
{
    return 42;
}//����Ĵ��붨����constexpr���͵ĺ���
int main()
{
    constexpr int sz=new_sz();//������constexpr��������������ֵͨ�����庯�����
    cout << sz;
    return 0;
}
