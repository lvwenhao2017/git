#include <iostream>
#include <string>
#include "sales_data.h"

using namespace std;
//用sales_data类实现书店程序
//首先声明sales_data在头文件里
//再在单独的cc文件里实现函数
int main()
{
    Sales_data total;
    if( read( cin, total ) ) {
        Sales_data trans;
        while( read( cin, trans ) ) {
            if( total.isbn() == trans.isbn() ) {
                total.combine( trans );
            }
            else {
                print( cout, total ) << endl;;
                total = trans;
            }
        }
        print( cout, total ) << endl;
        }
        else {
            cerr << "\aNo data?!" << endl;
        }
    return 0;
}
