#ifndef BOOK_DATA_H_INCLUDED
#define BOOK_DATA_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "sales_data.h"

/*

���ܣ�
�Ǽ��鼮��Ϣ   isbn �ۼ� index�Զ����
���ͼ����Ϣ
ͨ��isbn�Ų����鼮��Ϣ
ͨ��index�����鼮��Ϣ
��ʾ�����鼮��Ϣ
�����鼮������Ϣ

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
