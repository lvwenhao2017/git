#include <iostream>
#include <string>
#include <windows.h>
#include "sales_data.h"
#include "book_data.h"

/*
�ڶ�����������������
��
class book_data
public variable index
public function add ����Ϊ �����index
public function indexBind ����Ϊ �����index ��index�Ͷ���Ψһ�󶨣���index�ظ� ���� ��������indexʱ ����
public function getIndex  ��ȡisbn�ŵ�index

*/

using namespace std;
//��sales_data��ʵ��������
//��������sales_data��ͷ�ļ���
//���ڵ�����cc�ļ���ʵ�ֺ���
int main()
{
first:
    string s(35, '*');
    cout << s << endl;
    int choice;
    Library lib;
    cout << "   "
         << "��ӭ����ͼ�����ϵͳv1.0��������" << endl
         << "   " << "��ѡ��һ���:" << endl
         << "   " << "1.ͼ����� " << endl
         << "   " << "2.����ϵͳ " << endl;
    cin >> choice ;
    //
    if ( choice == 1) {
       system("cls");
       choice = 0;
second:
       cout << "��ӭ����ͼ�������棡������" << endl
            << "��ѡ��һ��ܣ�" << endl
            << "1.�Ǽ��鼮" << endl
            << "2.����isbn�Ų���ָ���鼮" << endl
            << "3.���������Ų���ָ���鼮" << endl
            << "4.��ʾ��������ӵ������鼮" << endl;
        cin >> choice;
        int cch;
third:
        if( choice == 1 )
        {
            book_data book_new;
            cout << "�������鼮��isbn�����ۼ�" << endl;
            lib.bookRegister(book_new);
            cout << "������ϣ�"
                 << "���������밴0" << endl
                 << "������һ���˵��밴1" << endl
                 << "���ص�һ���˵��밴9" << endl;
            cin >> cch;
            if( cch == 0)
                goto third;
            if( cch == 1 )
                goto second;
            if( cch == 9 )
                goto first;
        }
        else
        if( choice == 2 )
        {
            cout << "��������鼮��ISBN��" << endl;
            string isbn;
            cin >> isbn;
            lib.searchinIsbn( isbn );
            cout << "������ϣ�"
                 << "���������밴0" << endl
                 << "������һ���˵��밴1" << endl
                 << "���ص�һ���˵��밴9" << endl;
            cin >> cch;
            if( cch == 0)
                goto third;
            if( cch == 1 )
                goto second;
            if( cch == 9 )
                goto first;
        }
        else
        if( choice == 3 )
        {
            cout << "��������鼮��������" << endl;
            unsigned Index;
            cin >> Index;
            lib.searchinIndex( Index );
            cout << "������ϣ�"
                 << "���������밴0" << endl
                 << "������һ���˵��밴1" << endl
                 << "���ص�һ���˵��밴9" << endl;
            cin >> cch;
            if( cch == 0)
                goto third;
            if( cch == 1 )
                goto second;
            if( cch == 9 )
                goto first;
        }
        else
        if( choice == 4 )
        {
            lib.list();
            cout << "������ϣ�"
                 << "���������밴0" << endl
                 << "������һ���˵��밴1" << endl
                 << "���ص�һ���˵��밴9" << endl;
            cin >> cch;
            if( cch == 0)
                goto third;
            if( cch == 1 )
                goto second;
            if( cch == 9 )
                goto first;
        }
        else
            cout << "Error";
    }
    goto first;
/*  Sales_data total;
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
    */
    return 0;
}
