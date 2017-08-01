#ifndef BOOK_DATA_H_INCLUDED
#define BOOK_DATA_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "sales_data.h"

/*

功能：
登记书籍信息   isbn 售价 index自动标记
输出图书信息
通过isbn号查找书籍信息
通过index查找书籍信息
显示所有书籍信息
查找书籍销售信息

*/

struct book_data {
    string isbn;
    double price = 0.0;
    unsigned index = 0;
    unsigned num = 1;

};

class Library {
public:
    book_data book;
    vector<book_data> bookList;
    void bookRegister( book_data );
    ostream& print( ostream& , const book_data& ) const ;
    void searchinIsbn( string &isbn );
    void searchinIndex( unsigned );
    void list();
private:

};

#endif // BOOK_DATA_H_INCLUDED
