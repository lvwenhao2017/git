#include <iostream>
//��ָ�뽫����Ԫ��ȫ����0
using namespace std;

int main()
{
    int a[10]{1,2,3,4,5,6,7,8,9};
    int *p=a,*e=a+10;
    while( p < e ) {
        *p = 0;
        cout << *p;
        p++;
    }
    cout << endl;
    return 0;
}
