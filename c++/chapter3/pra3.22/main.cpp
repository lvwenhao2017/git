#include <iostream>
//p104
using namespace std;

int main()
{
    int a[10],b[10];
    for(size_t i=0;i<10;i++) {
        a[i]=i;//练习3.21中所得数组
        b[i]=a[i];
    }
    return 0;
}
