#include <iostream>
#include <string>
using namespace std;

int main()
{
    int i = 1,j = 0, k = 1;
/*   while( i != j <k ) //k>1不成立
        cout << i << " ";*/
/*    while (cin >>i ) {
        if( i == 42)
        {
            break;
        }
        cout << i << " ";
    }处理遇到42停止*/
/*    char name[16];
    char school[50];
    cin.get(name,16);
    /*  cin.get();  */
/*    cin.getline(school,50);
    cout << name << " " << endl << school << endl;//这种情况会出现 school收到回车符 所以 再添加一个语句 除去回车
    */

    while(cin >> i)
        j+=i;
    cin.clear();
  /*  cin >> k;     在被文件结束符结束输出之后 复位流的状态可继续输入*/
    cout << j << " " << k;
    return 0;
}
