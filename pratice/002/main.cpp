#include <iostream>
//c primer plus p176 18
using namespace std;
int main()
{
    int currf=5,week=1;
    while(currf<150)
    {
        currf=(currf-week)*2;
        week++;
        cout << "��ʿ�ڵ�" << week
        << "����" << currf
        << "������"
        <<endl;
    }
    return 0;
}
