#include <iostream>
#include <iterator>
using namespace std;
//用指针你判断数组是否相等
int main()
{
    int a[10]{1,2,3,4,5,6,7,8,9,10};
    int b[10];
    bool isEqual = true;
    for( auto &i:b) {
        cin >> i;
    }
    if (sizeof(a) != sizeof(b))
        cout << "\a无法比较";
    else {
        int *p = a,*c = b;
        while( p <= end(a)-1) {
        if( *p != *c) {
            cout << "不相等";
            isEqual = false;
            break;
        }
        else {
            p++;
            c++;
        }
    }
    if( isEqual )
        cout << "相等";
    }
    return 0;
}
