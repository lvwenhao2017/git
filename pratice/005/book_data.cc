#include <iostream>
#include <string>
#include <vector>
#include "book_data.h"
using namespace std;
/*

*/

void Library::bookRegister( book_data item){
    static unsigned i = 0;
    cin >> item.isbn >> item.price;
    for( auto &a : bookList ) {
        if( a.isbn == item.isbn ) {
            a.num++;
            item.num++;
            break;
        }
    }
    if( item.num == 1 ) {
        i++;
        item.index = i;
        bookList.push_back(item);
        cout << item.index <<endl;
    }
}

void Library::searchinIsbn( string &isbn ) {
    for( auto i : bookList )
        if( isbn == i.isbn )
            print(cout,i) << endl;
}

void Library::searchinIndex( unsigned index ) {
    for( auto i : bookList )
    if( index == i.index )
        print(cout,i) << endl;
    else
        cout << "\aÎÞ·¨ÕÒµ½";
}

void Library::list() {
    if( bookList.size() == 0 )
        cout << "Empty";
    for( auto i : bookList )
        print(cout,i) << endl;
}

ostream& Library::print( ostream& os, const book_data& item ) const {
    os << item.index << " " << item.isbn << " " << item.price << " " << item.num << " ";
    return os;
}

