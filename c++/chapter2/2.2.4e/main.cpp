#include <iostream>

using namespace std;

int main()
{
    for (int reused = 10;reused >= 0;--reused)
    {
        cout << reused << " ";
        cout << endl << reused;//������������ŵ�����������������������gcc��������������ֱ�������Ž���
    }
    return 0;
}
