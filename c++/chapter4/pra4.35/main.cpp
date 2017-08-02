#include <iostream>

using namespace std;
//验证隐式类型转换是否发生
int main()
{
    cout << "Hello world!" << endl;
    char cval;
    float fval = 1.0;
    double dval = 1.0;
    int ival = 97;
    cval = 'a' + 3;//发生了隐式类型转换
    cout << cval/*d*/;
    cval = ival + dval + fval; // c  发生了
    cout << endl << cval;
    return 0;
}
