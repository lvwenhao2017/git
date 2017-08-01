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
    string isbn() const { return bookNo; }//获取isbn
    Sales_data &combine( const Sales_data& ); //
private:
    double avg_price() const
        { return units_sold ? revenue/units_sold : 0;}
    string bookNo;//书号 即isbn
    unsigned units_sold = 0; //每本书销售量
    double revenue = 0.0; //销售收入=单价*销售量
};
Sales_data add( const Sales_data &lhs, const Sales_data &rhs );//使用引用参数效率高
istream &read( istream&, Sales_data& );
ostream &print( ostream&, const Sales_data& );//不需要改变内容 可把形参定义为对常量的引用
#endif // SALES_DATA_H_INCLUDED
