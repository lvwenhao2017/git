#include <iostream>
#include "SALES_DATA.h"
//�öγ���ʹ�����Զ�����Sales_data��������ͷ�ļ���
using namespace std;
int main()
{
    Sales_data data1,data2;
    double price =0;
    cin >> data1.bookno >>data1.units_sold>>price;//�����һ�ʽ���
    data1.revenue=data1.units_sold*price;//��������
    cin >> data2.bookno >>data2.units_sold>>price;//�ڶ��ʽ���
    data2.revenue=data2.units_sold*price;//��������
    if(data1.bookno==data2.bookno) {
        unsigned totalcnt =data1.units_sold+data2.units_sold;
        double totalRevenue =data1.revenue+data2.revenue;
        cout  << data1.bookno << " " << totalcnt
        << " " << totalRevenue << " ";
        if(totalcnt!=0)
            cout << totalRevenue/totalcnt << endl;
        else
            cout << "(no sales)" << endl;
        return 0;
    }
    else
    {
        cerr << "\aData must refer to the same ISBN"
        <<endl;
        return -1;
    }

}
