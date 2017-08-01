#ifndef SALES_DATA_H_INCLUDED
#define SALES_DATA_H_INCLUDED
#include <string>
#include <iostream>
using namespace std;
class Sales_data {
    friend Sales_data add( const Sales_data &lhs, const Sales_data &rhs );
    friend istream &read( istream&, Sales_data& );
    friend ostream &print(ostream&, const Sales_data&);
public:
    Sales_data() = default;
    Sales_data( const string &s, unsigned n, double p ):bookNo(s),units_sold(n),revenue(n*p) {}
    Sales_data( const string &s ):bookNo(s) {}
    Sales_data(istream&);
    string isbn() const { return bookNo; }//��ȡisbn
    Sales_data &combine( const Sales_data& ); //
private:
    double avg_price() const
        { return units_sold ? revenue/units_sold : 0;}
    string bookNo;//��� ��isbn
    unsigned units_sold = 0; //ÿ����������
    double revenue = 0.0; //��������=����*������
};
Sales_data add( const Sales_data &lhs, const Sales_data &rhs );//ʹ�����ò���Ч�ʸ�
istream &read( istream&, Sales_data& );
ostream &print( ostream&, const Sales_data& );//����Ҫ�ı����� �ɰ��βζ���Ϊ�Գ���������
#endif // SALES_DATA_H_INCLUDED
