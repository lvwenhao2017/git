#include <iostream>
#include <string>
#include <windows.h>
#include "sales_data.h"
#include "book_data.h"

/*
第二版打算添加索引功能
：
class book_data
public variable index
public function add 参数为 对象和index
public function indexBind 参数为 对象和index 将index和对象唯一绑定（当index重复 或者 对象已有index时 错误）
public function getIndex  获取isbn号的index

*/

using namespace std;
//用sales_data类实现书店程序
//首先声明sales_data在头文件里
//再在单独的cc文件里实现函数
int main()
{
first:
    string s(35, '*');
    cout << s << endl;
    int choice;
    Library lib;
    cout << "   "
         << "欢迎进入图书管理系统v1.0！！！！" << endl
         << "   " << "请选择一项功能:" << endl
         << "   " << "1.图书管理 " << endl
         << "   " << "2.销售系统 " << endl;
    cin >> choice ;
    //
    if ( choice == 1) {
       system("cls");
       choice = 0;
second:
       cout << "欢迎进入图书管理界面！！！！" << endl
            << "请选择一项功能：" << endl
            << "1.登记书籍" << endl
            << "2.根据isbn号查找指定书籍" << endl
            << "3.根据索引号查找指定书籍" << endl
            << "4.显示所有已添加的所有书籍" << endl;
        cin >> choice;
        int cch;
third:
        if( choice == 1 )
        {
            book_data book_new;
            cout << "请输入书籍的isbn号与售价" << endl;
            lib.bookRegister(book_new);
            cout << "处理完毕！"
                 << "继续操作请按0" << endl
                 << "返回上一级菜单请按1" << endl
                 << "返回第一级菜单请按9" << endl;
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
            cout << "请输入该书籍的ISBN号" << endl;
            string isbn;
            cin >> isbn;
            lib.searchinIsbn( isbn );
            cout << "处理完毕！"
                 << "继续操作请按0" << endl
                 << "返回上一级菜单请按1" << endl
                 << "返回第一级菜单请按9" << endl;
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
            cout << "请输入该书籍的索引号" << endl;
            unsigned Index;
            cin >> Index;
            lib.searchinIndex( Index );
            cout << "处理完毕！"
                 << "继续操作请按0" << endl
                 << "返回上一级菜单请按1" << endl
                 << "返回第一级菜单请按9" << endl;
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
            cout << "处理完毕！"
                 << "继续操作请按0" << endl
                 << "返回上一级菜单请按1" << endl
                 << "返回第一级菜单请按9" << endl;
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
