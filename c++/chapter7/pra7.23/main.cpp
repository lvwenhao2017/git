#include <iostream>
#include "screen.h"
#include <random>
#include <string>


using namespace std;
using pos = string::size_type;
//����һ���Լ���screen��
int main()
{
    cout << "Hello world!" << endl;
    Screen myScreen(10,10,'c');
    myScreen.move(1,1).set('a');
    default_random_engine e;
    uniform_int_distribution<pos> u(1,10);
    uniform_int_distribution<int> c(97,122);
    for (int i = 1; i < 100; ++i)
        myScreen.set(u(e),u(e),c(e));//����������� ������Ļ����
    inputScreen(myScreen);
    return 0;
}
