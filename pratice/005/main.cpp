#include <iostream>
#include <string>
#include "sales_data.h"

using namespace std;
//��sales_data��ʵ��������
//��������sales_data��ͷ�ļ���
//���ڵ�����cc�ļ���ʵ�ֺ���
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
