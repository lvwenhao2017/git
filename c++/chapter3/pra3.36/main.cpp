#include <iostream>
#include <iterator>
using namespace std;
//��ָ�����ж������Ƿ����
int main()
{
    int a[10]{1,2,3,4,5,6,7,8,9,10};
    int b[10];
    bool isEqual = true;
    for( auto &i:b) {
        cin >> i;
    }
    if (sizeof(a) != sizeof(b))
        cout << "\a�޷��Ƚ�";
    else {
        int *p = a,*c = b;
        while( p <= end(a)-1) {
        if( *p != *c) {
            cout << "�����";
            isEqual = false;
            break;
        }
        else {
            p++;
            c++;
        }
    }
    if( isEqual )
        cout << "���";
    }
    return 0;
}
