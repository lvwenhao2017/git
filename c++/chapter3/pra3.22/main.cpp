#include <iostream>
//p104
using namespace std;

int main()
{
    int a[10],b[10];
    for(size_t i=0;i<10;i++) {
        a[i]=i;//��ϰ3.21����������
        b[i]=a[i];
    }
    return 0;
}
